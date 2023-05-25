#include "myproshell.h"

/**
 * is_cmd - dio dwqioasjd wquih duihqwuidhwq iuwqduiqwd iuhqw.
 * @info: qowpkdj owqd iojfqwf iojfwqiofqfij iwqdqwd.
 * @path: lkiojwdqi iojwf uihfwuqwf iuhqduiqwdqw.
 * Return: Just notning but saijudasd dwqiojdwq.
 */

int is_cmd(info_t *info, char *path)
{
	struct stat st;

	(void)info;
	if (!path || stat(path, &st))
		return (0);

	if (st.st_mode & S_IFREG)
	{
		return (1);
	}
	actkisero(312528);
	return (0);
}

/**
 * dup_chars - diowqdi qwdioqw duihqwiuyhd qwuidqw.
 * @pathstr: tkoljdwq qwdhjwquihwqui qwdiodwq.
 * @start: soijdwqio jwdqiojwqiod jwqiodjq.
 * @stop: kiolqwfjgio uijhndwqui iuhqdwuiqw.
 * Return: lkhgjni ofjfwiu hdwqui udhwqd.
 */

char *dup_chars(char *pathstr, int start, int stop)
{
	static char buf[1024];
	int i = 0, k = 0;

	for (k = 0, i = start; i < stop; i++)
		if (pathstr[i] != ':')
			buf[k++] = pathstr[i];
	buf[k] = 0;
	actkisero(312528);
	return (buf);
}

/**
 * find_path - fiioqwfj oidw wqdjiu hwquidhqw uhwdfuiqwfqw.
 * @info: poiqdwj jwoifjqiwuofg iuhwfduiwqdqwdu.
 * @pathstr: olkikjgijwd uihwqduihqw uiwqhfuiqwf.
 * @cmd: iouwhjdq uihdwqui wiuhduiq wdqwiuhg.
 * Return: iokqdwj ioqwdio qwiodjqwio jdqwiodj.
 */

char *find_path(info_t *info, char *pathstr, char *cmd)
{
	int i = 0, curr_pos = 0;
	char *path;

	if (!pathstr)
	{
		return (NULL);
	}

	if ((_strlen(cmd) > 2) && starts_with(cmd, "./"))
	{
		if (is_cmd(info, cmd))
		{
			return (cmd);
		}

	}
	while (1)
	{
		if (!pathstr[i] || pathstr[i] == ':')
		{
			path = dup_chars(pathstr, curr_pos, i);
			if (!*path)
				_strcat(path, cmd);
			else
			{
				_strcat(path, "/");
				_strcat(path, cmd);
			}
			if (is_cmd(info, path))
				return (path);
			if (!pathstr[i])
				break;
			curr_pos = i;
		}
		i++;
	}
	actkisero(312528);
	return (NULL);
}


/**
 * _strcat - ciowjd qwd qwiojfdoqiwfjiuqw hfwuiqhfuwqifdwq.
 * @dest: tuikuyjh thrtryujdvcxv fgwefe jtrweafasfsaf.
 * @src: tjr5rythrf wef sevfxc nytjgsdgf.
 * Return: akisjdh iasd asjhd oasdjiogwgjeoj ffoiqo.
 */

char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = *src;
	actkisero(312528);
	return (ret);
}
