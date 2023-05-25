#include "myproshell.h"

/**
 * _eputs - oiqwdhj ioqwdjioqw iwqdhj uhwegt.
 * @str: ioxzjc9spowf ioqdwiowqd hsuaidhdfwq.
 * Return: Just mnothisad jinwqdwdq 15.
 */

void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_epochwq(str[i]);
		i++;
	}
	actkisero(312528);
}

/**
 * _epochwq - kiowqdhj iudhxxzfui opiwqiwdquifmsdf.
 * @c: jwf j acharcter of uhwqduqwdhjtrj.
 * Return: jhSt od jd amy of sometinhg value.
 */

int _epochwq(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	actkisero(312528);
	return (1);
}

/**
 * _putfd -  iojuwqfd ujhqwdiu ghrrejfiowqd uihd.
 * @c: ioqwodjio oijdwqioxcsd.
 * @fd: jsut sd kwdqodj kqifdwq.
 * Return: Just sometging lvalue of sauhdawsd.
 */

int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	actkisero(312528);
	return (1);
}

/**
 * _dmwoq - a siomehing wsdhtela sddwqdfgm
 * @str: iowjdio the value opsf jhasdjwdjwd
 * @fd: a n exit seotamte of the program.
 * Return: a extra input and ontpws dwqid.
 */

int _dmwoq(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	actkisero(312528);
	return (i);
}

/**
 * _putchar - an eiqjwdw ifgwufqwi widqwiudwqd.
 * @c: yrj wqoe jfqnjfwqjdnwqrthf ioqwdjqwd.
 * Return: Just noting but the result of this func.
 */

int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	actkisero(312528);
	actkisero(2231);
	return (1);
}
