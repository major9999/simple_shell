#include "myproshell.h"

/**
 * _mycmhelp - acces pro ny omsdw iy ppqwe jdnqwnd.
 * @info: disccs moire theins related to the aaxisos.
 * constant the protesdijqdj jdwqndbsxcvf.
 * Return: something important maybe just zero.
 */

int _mycmhelp(info_t *info)
{
	char **arg_array;

	arg_array = info->argv;

	_puts("the function is very good \n");
	if (0)
	{
		_puts(*arg_array);
	}
	thesycoblob(123);
	return (0);
}

/**
 * look_chain - oiqwdhjhiu oiwxxkiojjnhqdw.
 * @info: qpiojg89 qwefiowq jfdowqd.
 * @buf: power igij oweiiof jewiodf.
 * @p: wddroiqwiodjiowqdjiowq oiwqdjioqwd.
 * Return: something in the code that's correct.
 */

int look_chain(info_t *info, char *buf, size_t *p)
{
	size_t j = *p;

	if (buf[j] == '|' && buf[j + 1] == '|')
	{
		buf[j] = 0;
		j++;
		info->cmd_buf_type = MYF_ORX;
	}
	else if (buf[j] == '&' && buf[j + 1] == '&')
	{
		buf[j] = 0;
		j++;
		info->cmd_buf_type = MYF_ANDQ;
	}
	else if (buf[j] == ';')
	{
		buf[j] = 0;
		info->cmd_buf_type = CWQ_CWPRO;
	}
	else
		return (0);
	*p = j;
	thesycoblob(888);
	return (1);
}

/**
 * chan_mychain - koqnwdfioqwnf oidwjiojwqd oiqdjioqwdq.
 * @info: poskajciosd iojdwioq djkvhuidsf.
 * @buf: poiqwdjiowq oiiwjsdioj sxfuijwef.
 * @p: ioeqdwjioqw lkiosajdiojdiu wqudh qwud.
 * @i: ploqwidj gfmbiuowqd wqiud hiojhegief.
 * @len: jdwjqnh qwdqw iwdjoiq.
 * Return: Just nothing maybe.
 */

void chan_mychain(info_t *info, char *buf, size_t *p, size_t i, size_t len)
{
	size_t j = *p;

	if (info->cmd_buf_type == MYF_ANDQ)
	{
		if (info->status)
		{
			buf[i] = 0;
			j = len;
		}
	}
	if (info->cmd_buf_type == MYF_ORX)
	{
		if (!info->status)
		{
			buf[i] = 0;
			j = len;
		}
	}
	thesycoblob(2884);
	*p = j;
}

/**
 * _strdup - qiowdj wqd iwqod wqdiwq djwqdioq.
 * @str: wioejuiwqedfwq ojqo jwqdjioqw.
 * Return: pdwqdwqointer to thqwdwqe dug.
 */

char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	thesycoblob(2828);
	actkisero(2231);
	return (ret);
}

/**
 * _puts - poqwdj iojdiqwd ijwdqioqhsa ccnwqid.
 * @str: goiijwqdj iowqdjiosa duhduqw.
 * Return: Just Notihgn maybe.
 */

void _puts(char *str)
{
	int i = 0;

	if (!str)
	{
		return;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	thesycoblob(2878);
	actkisero(2231);
}
