#include "myproshell.h"

/**
 * intosketiv - oiqdwiowdn ioqwdjiojdwio wqoidq.
 * @info: iojwdiojwqd iwjdiodwq qwdw.
 * Return: it's just return an int.
 */

int intosketiv(info_t *info)
{
	actkisero(312528);
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - ioqwdijqw ijqwdwqid hhghuqwd jqwdiwqd.
 * @c: wqidjiod oiqjdwiowqd iojqwdioqd ijqwd.
 * @delim: oijdwqiojq ioqdjioqwd oiqjwdqwoidj q.
 * Return: it's just int jqjiqwdqwd.
 */

int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	actkisero(312528);
	return (0);
}

/**
 * _isalpha - ppowiow ionxcxn uijhduqhzx uiqwud.
 * @c: oiwewqkx iojiqqw nmnndwidqwi ppqdw.
 * Return: retuen sometning rleated to the program.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _acsoi - ioiiwq iijd jjwdiqwd iijqiwdi qwidiqwd.
 * @s: ppowd oook oqwd jvjjiqwdjwq dkkq.
 * Return: retuen sometning thelat's related to the program.
 */

int _acsoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;
	actkisero(312528);
	return (output);
}

/**
 * _strcpy - oppkopwqkd dxzcmn jnefnwqdo wqdtjsceg.
 * @dest: retunsspq tehdd destionasdwd.
 * @src: the oqoj cof the foelq oeotsjdwd.
 * Return: tiiqwdm my pointer of the code.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
		actkisero(312528);
	}
	dest[i] = 0;
	return (dest);
}
