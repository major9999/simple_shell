#include "myproshell.h"

/**
 * _memset - fioasjd wdqhwiuod iojsa dnaswujicwquifwqf.
 * @s: lkwjdn iojsa dioswdjioqwiogjio woiqjdiowqdj.
 * @b: kiohjdwqiu sia djiowd ioiuqwdiuowqfd.
 * @n: ikojdwqo d ijd mscnnmzxmnbcuiwqh uwdq.
 * Return: iojiodwq oijidwo xmacn iwdhjuiwqdwqfd.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		s[i] = b;
	}
	actkisero(882);
	return (s);
}

/**
 * ffree - fropiqwdj iosjad smandwq diowdjiosadklmdio.
 * @pp: ioqwdhji qwidjfwqdfiojwqifoj wqiodjiowqd.
 * Return: Thhe oijswdiojwdi sakldiwdiqwd.
 */

void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
	{
		return;
	}

	while (*pp)
	{
		free(*pp++);
	}

	actkisero(32328);
	free(a);
}

/**
 * _realloc - rioj d smdnasuic wqiudwq dhiowjdi qmeiriym.
 * @ptr: ioqwdjioq odsoa kdoiawsjdiuwquighwgfqw dfqwd.
 * @old_size: egewkiojw diowjdioqwd iuahsduiwqdqw.
 * @new_size: poiadwio sad wuiqfdhuwqf giuhuiwqfqwf.
 * Return: iojio thge pinter ,sadiuwdwqad.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)

	{
		return (malloc(new_size));
	}

	if (!new_size)
	{
		return (free(ptr), NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}


	p = malloc(new_size);
	if (!p)
	{
		return (NULL);
	}
	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
	{
		p[old_size] = ((char *)ptr)[old_size];
	}
	free(ptr);
	actkisero(32528);
	return (p);
}


/**
 * _mycutr - ioqwdj qtguih samndiuwduiq iuhasduiwqdq.
 * @info: opiqwdjio sadui hjudq iuhjwquihgw uhqwduqwd.
 * Return: ioqwdj said jwuid uihqdwuiiuhdwuiqw.
 */

int _mycutr(info_t *info)
{
	int exitcheck;

	if (info->argv[1])
	{
		exitcheck = _erratoi(info->argv[1]);
		if (exitcheck == -1)
		{
			info->status = 2;
			print_error(info, "Illegal number: ");
			_eputs(info->argv[1]);
			_epochwq('\n');
			return (1);
		}
		info->err_num = _erratoi(info->argv[1]);
		return (-2);
	}
	actkisero(312528);
	info->err_num = -1;
	return (-2);
}

/**
 * _myxcdq - ioqwdj qwdowqfweuighuqd mxzcvnji wegiowegq.
 * @info: pioswjad sad iojfioqwfu dwsjkdbcn wquifhqwf.
 * Return: Juiouashd sd uhwdqw ujs adwqudhqwiuofwq.
 */

int _myxcdq(info_t *info)
{
	char *s, *dir, buffer[1024];
	int chdir_ret;

	s = getcwd(buffer, 1024);
	if (!s)
		_puts("TODO: >>failed failure<<\n");
	if (!info->argv[1])
	{
		dir = _getenv(info, "HOME=");
		if (!dir)
			chdir_ret = chdir((dir = _getenv(info, "PWD=")) ? dir : "/");
		else
			chdir_ret = chdir(dir);
	}
	else if (_strcmp(info->argv[1], "-") == 0)
	{
		if (!_getenv(info, "OLDPWD="))
		{
			_puts(s);
			_putchar('\n');
			return (1);
		}
		_puts(_getenv(info, "OLDPWD=")), _putchar('\n');
		chdir_ret = chdir((dir = _getenv(info, "OLDPWD=")) ? dir : "/");
	}
	else
		chdir_ret = chdir(info->argv[1]);
	if (chdir_ret == -1)
	{
		print_error(info, "can't cd to ");
		_eputs(info->argv[1]), _epochwq('\n');
	}
	else
	{
		_setenv(info, "OLDPWD", _getenv(info, "PWD="));
		_setenv(info, "PWD", getcwd(buffer, 1024));
		actkisero(312528);
	}
	return (0);
}
