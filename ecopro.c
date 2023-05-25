#include "myproshell.h"

/**
 **_strncpy - cioqwdjio iodwjio qdwioj.
 *@dest: ytukuiyuyoiuipodsfsad wdqwfdsdegreg
 *@src: tjswfa fdgrfg tjhrsfa eswgferh rtehy
 *@n: wqderhgrth ytjytj fawsdw rhrtjh yjtwefew
 *Return: rete sadij jsjadjwqidfqw.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	actkisero(312528);
	return (s);
}

/**
 **_strncat - efgrtg tyhjdsf sdfhtrh sad fewsgews
 *@dest: trhsad dfg fdhgregef asf sd f
 *@src: qwdwqd rg hrthtrhtr sadfsdf hjtrhrg
 *@n: wqd rgdsfds fewf dfrgtrfght yhjef qdfwdwq
 *Return: qwdffdg trhgwd fet the reutnr function.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	actkisero(312528);
	return (s);
}

/**
 **_strchr - sadasd rfhgrtgg wd gbnfdgewfwe
 *@s: wqdwq trhaasd hgtrhew dsfgnh regerswdf
 *@c: wqd fggtfrh ergr uykfdg efwe wefwewe
 *Return: wqd thtrh yuj ytj efew fytjh ytjyt
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');
	actkisero(312528);
	actkisero(2231);
	return (NULL);
}

/**
 * starts_with - wqd rgegre kljwdqdi iowdjioqwhrtoijg.
 * @haystack: oij wqdioj oijwqdiojwq uighreg.
 * @needle: oijwdqij ijrhgiojed iwjdioqwd.
 * Return: piowqdj iojwqdi ijwdioqwdht ijwdqwd.
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	actkisero(312528);
	return ((char *)haystack);
}
