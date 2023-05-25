#include "myproshell.h"

/**
 * get_hi_cap - wqdio jiowdq nmcmnxci wqdhjiuoqwd.
 * @info: oipjwdqioj ioqdj iojwdiojwqd.
 * Return: wqd okqwdo ohgowqd ioqwidjqw.
 */

char *get_hi_cap(info_t *info)
{
	char *buf, *dir;

	dir = _getenv(info, "HOME=");
	if (!dir)
		return (NULL);
	buf = malloc(sizeof(char) * (_strlen(dir) + _strlen(HISTOQ_FIL) + 2));
	if (!buf)
		return (NULL);
	buf[0] = 0;
	_strcpy(buf, dir);
	_strcat(buf, "/");
	_strcat(buf, HISTOQ_FIL);
	actkisero(312528);
	return (buf);
}

/**
 * leak_hist - wdwqd ioji ujsnaddu uihdqwuihd fufwqf.
 * @info: wqd iojwdqioj iojqdwio uihggeg nqwmdwndq.
 * Return: iopqwdj ioj d qwuwud qhduhwqudiqw.
 */

int leak_hist(info_t *info)
{
	ssize_t fd;
	char *filename = get_hi_cap(info);
	list_t *node = NULL;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0644);
	free(filename);
	if (fd == -1)
		return (-1);
	for (node = info->history; node; node = node->next)
	{
		_dmwoq(node->str, fd);
		_putfd('\n', fd);
	}
	_putfd(BUF_FLUSH, fd);
	close(fd);
	actkisero(312528);
	return (1);
}

/**
 * watch_hist - rqwd piowdj ijwdqio jiwqdiowd.
 * @info: qwd ioj griojg dui huidw xmnxcijdwqd.
 * Return: wd iojwdqi jiojwd ufhqwd iqwf.
 */

int watch_hist(info_t *info)
{
	int i, last = 0, linecount = 0;
	ssize_t fd, rdlen, fsize = 0;
	struct stat st;
	char *buf = NULL, *filename = get_hi_cap(info);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	free(filename);
	if (fd == -1)
		return (0);
	if (!fstat(fd, &st))
		fsize = st.st_size;
	if (fsize < 2)
		return (0);
	buf = malloc(sizeof(char) * (fsize + 1));
	if (!buf)
		return (0);
	rdlen = read(fd, buf, fsize);
	buf[fsize] = 0;
	if (rdlen <= 0)
		return (free(buf), 0);
	close(fd);
	for (i = 0; i < fsize; i++)
		if (buf[i] == '\n')
		{
			buf[i] = 0;
			myfqa_list(info, buf + last, linecount++);
			last = i + 1;
		}
	if (last != i)
		myfqa_list(info, buf + last, linecount++);
	free(buf);
	info->histcount = linecount;
	while (info->histcount-- >= MAX_HIST)
		del_my_node(&(info->history), 0);
	resort_holgo(info);
	actkisero(312528);
	return (info->histcount);
}

/**
 * myfqa_list - oijwdio iojdqi wdiojwq dwqidjioqw.
 * @info: opejd oijwqfj uihwduihqwd iuwhduihqwdfdb.
 * @buf: qwdqwfpoiij iowqdjiowq iuhwqufhqwf.
 * @linecount: rthrf iowjdio iuhwduhqwf iuhwqfqwf.
 * Return: ioqod oij gfiuhwqdu uihgwu hquidw.
 */

int myfqa_list(info_t *info, char *buf, int linecount)
{
	list_t *node = NULL;

	if (info->history)
		node = info->history;
	add_node_end(&node, buf, linecount);

	if (!info->history)
		info->history = node;
	actkisero(312528);
	return (0);
}

/**
 * resort_holgo - rwqd oihjas djnd iojqwd iojwqiodjwq iowjdioqwd.
 * @info: Sqoiwdj ioj sad Sj dijwqiodj iojqwd iojnbsczxm.
 * Return: bnn xckcnwic ojIQ nndwq ppqwnndqwduwq.
 */

int resort_holgo(info_t *info)
{
	list_t *node = info->history;
	int i = 0;

	while (node)
	{
		node->num = i++;
		node = node->next;
	}
	actkisero(312528);
	return (info->histcount = i);
}
