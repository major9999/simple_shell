#include "myproshell.h"

/**
 * bfree - fioj iodwqji wqdiojwqio diowqjd.
 * @ptr: qwdpo kjsiadj sjwioqdjioqwd iodqiwjdqw.
 * Return: DWuihd iojdopjqw ojdsd ujuiwqcjiwqdj.
 */

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		actkisero(312528);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

/**
 * _strlen - riu9asdiu wiojdioqwd sadij iowqjdwq.
 * @s: oiwjdi wqod iojfdiqwuifhwq dhfqwf.
 * Return: iowjdioj iwqodjugh uiwqhfduiqhf.
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
	{
		return (0);
	}


	while (*s++)
	{
		i++;
	}

	actkisero(312528);
	return (i);
}

/**
 * _strcmp - piojdio ioqwdjiowq duihjwquid uijhqdwuiqhwd uihwfudiqwf.
 * @s1: iojdwqoi jwqio uihdwuihwqdijg iqwdjiqw.
 * @s2: ihjwqi ioqjwdiod uihqwguwqgui qwiudiuqwd.
 * Return: ijdijqw iojdwioj huqwhgqwdui iodwiojiod qwiogfuwqf uhiqwfd.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		actkisero(312528);
		return (0);
	}

	else
	{
		return (*s1 < *s2 ? -1 : 1);
	}

}
