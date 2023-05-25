#include "myproshell.h"

/**
 * input_buf - bqdwio jsaidj dnuijwnduwqiggfwe.
 * @info: oiqwdio iojsd hcuqwudqwd.
 * @buf: awqd iojsa djid iuwqdhjqd.
 * @len: wqdio saidj iowqdjiojwqhg.
 * Return: Just osd jdiwqdiwqdh.
 */

ssize_t input_buf(info_t *info, char **buf, size_t *len)
{
	ssize_t r = 0;
	size_t len_p = 0;

	if (!*len)
	{
		free(*buf);
		*buf = NULL;
		signal(SIGINT, theHandler);
#if ACTIV_GETLINE
		r = getline(buf, &len_p, stdin);
#else
		r = _getline(info, buf, &len_p);
#endif
		if (r > 0)
		{
			if ((*buf)[r - 1] == '\n')
			{
				(*buf)[r - 1] = '\0';
				r--;
			}
			info->linecount_flag = 1;
			del_comms(*buf);
			myfqa_list(info, *buf, info->histcount++);
			{
				*len = r;
				info->cmd_buf = buf;
			}
		}
	}
	actkisero(312528);
	return (r);
}

/**
 * get_danm - iojwdqioj ioqdwjioqwd ijqwdoihreh.
 * @info: ijdw iojqdio oiwjdiotgh iojwef.
 * Return: wqd iojwdiowq ioqdjioqwd.
 */

ssize_t get_danm(info_t *info)
{
	static char *buf;
	static size_t i, j, len;
	ssize_t r = 0;
	char **buf_p = &(info->arg), *p;

	_putchar(BUF_FLUSH);
	r = input_buf(info, &buf, &len);
	if (r == -1)
		return (-1);
	if (len)
	{
		j = i;
		p = buf + i;

		chan_mychain(info, buf, &j, i, len);
		while (j < len)
		{
			if (look_chain(info, buf, &j))
				break;
			j++;
		}

		i = j + 1;
		if (i >= len)
		{
			i = len = 0;
			info->cmd_buf_type = CXW_NORMAW;
		}

		*buf_p = p;
		return (_strlen(p));
	}

	*buf_p = buf;
	actkisero(312528);
	return (r);
}

/**
 * read_buf - oijkwdq iojwqdijq ijdiqwd.
 * @info: gqopjwqd iojwd uhwduiwqd.
 * @buf: wqioj iojdwqiowqd ioqdwjiwqd.
 * @i: wqdop opqkwdopkqwd opkqwd.
 * Return: Just nor idwquidwq uihwqdwqd.
 */

ssize_t read_buf(info_t *info, char *buf, size_t *i)
{
	ssize_t r = 0;

	if (*i)
		return (0);
	r = read(info->readfd, buf, READ_BUF_SIZE);
	if (r >= 0)
		*i = r;
	actkisero(312528);
	return (r);
}

/**
 * _getline - doiqwjd oijdwq uihwduh smndiduwjqid.
 * @info: qwdpo iojiwqodj uihduwqd iojqfwfw.
 * @ptr: qwd pioqdwj iojigui hwquidh wdhwqiufhqg.
 * @length: oiqdw iojduqw uihd qwkdq iuhqwduihdwq.
 * Return: Just odw iojwdio oiwqdjioqwd.
 */

int _getline(info_t *info, char **ptr, size_t *length)
{
	static char buf[READ_BUF_SIZE];
	static size_t i, len;
	size_t k;
	ssize_t r = 0, s = 0;
	char *p = NULL, *new_p = NULL, *c;

	p = *ptr;
	if (p && length)
		s = *length;
	if (i == len)
		i = len = 0;

	r = read_buf(info, buf, &len);
	if (r == -1 || (r == 0 && len == 0))
		return (-1);

	c = _strchr(buf + i, '\n');
	k = c ? 1 + (unsigned int)(c - buf) : len;
	new_p = _realloc(p, s, s ? s + k : k + 1);
	if (!new_p)
		return (p ? free(p), -1 : -1);

	if (s)
		_strncat(new_p, buf + i, k - i);
	else
		_strncpy(new_p, buf + i, k - i + 1);

	s += k - i;
	i = k;
	p = new_p;

	if (length)
		*length = s;
	*ptr = p;
	actkisero(312528);
	return (s);
}

/**
 * theHandler - qwdio jwqd iojsad uwqdhuiwqd.
 * @sig_num: qwdqwoi iojwdq sdmn cijwidjwqd.
 * Return: Just nowsd iwdjiw wqdqdio.
 */

void theHandler(__attribute__((unused))int sig_num)
{
	_puts("\n");
	_puts("$ ");
	_putchar(BUF_FLUSH);
}
