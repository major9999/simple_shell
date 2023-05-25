#include "myproshell.h"

/**
 * **strtow - siodw jioqwdj iodw uihsnaduiucwqucwquwq uidwq.
 * @str: lqwd iuh uwqd dhyuqw duqwdh quwdhuiwqdh.
 * @d: rfgiosajd iusad uywqd iojsad uhdwqu.
 * Return: reiuf duhd wuidh wqudh knsxac asduihwqudh wquid.
 */

char **strtow(char *str, char *d)
{
	int i, j, k, m, numwords = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	if (!d)
		d = " ";
	for (i = 0; str[i] != '\0'; i++)
		if (!is_delim(str[i], d) && (is_delim(str[i + 1], d) || !str[i + 1]))
			numwords++;

	if (numwords == 0)
		return (NULL);
	s = malloc((1 + numwords) * sizeof(char *));
	if (!s)
		return (NULL);
	for (i = 0, j = 0; j < numwords; j++)
	{
		while (is_delim(str[i], d))
			i++;
		k = 0;
		while (!is_delim(str[i + k], d) && str[i + k])
			k++;
		s[j] = malloc((k + 1) * sizeof(char));
		if (!s[j])
		{
			for (k = 0; k < j; k++)
				free(s[k]);
			free(s);
			return (NULL);
		}
		for (m = 0; m < k; m++)
			s[j][m] = str[i++];
		s[j][m] = 0;
	}
	s[j] = NULL;
	thexmenteam(5);
	return (s);
}

/**
 * **strtow2 - Wuid huwqd uiasdh diuhwduhqwd iuwqdhuiwqd.
 * @str: lijowqidj idjqwo dqiuhduqhwdwqduihqw.
 * @d: lkjasd asiod iuwjdiu qwduhwqdas dsa.
 * Return: ioasjd ioasdijwd qfhwqufh nnddswu uhqdw.
 */

char **strtow2(char *str, char d)
{
	char **s;
	int i, j, k, m, numwords = 0;

	if (str == NULL || str[0] == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		if ((str[i] != d && str[i + 1] == d) ||
				    (str[i] != d && !str[i + 1]) || str[i + 1] == d)
			numwords++;
	if (numwords == 0)
		return (NULL);

	s = malloc((1 + numwords) * sizeof(char *));
	if (!s)
		return (NULL);
	for (i = 0, j = 0; j < numwords; j++)
	{
		while (str[i] == d && str[i] != d)
			i++;
		k = 0;
		while (str[i + k] != d && str[i + k] && str[i + k] != d)
			k++;
		s[j] = malloc((k + 1) * sizeof(char));
		if (!s[j])
		{
			for (k = 0; k < j; k++)
				free(s[k]);
			free(s);
			return (NULL);
		}
		for (m = 0; m < k; m++)
			s[j][m] = str[i++];
		s[j][m] = 0;
	}
	s[j] = NULL;
	thexmenteam(251);
	return (s);
}


/**
 * replic_alocio - ruiowqid suiadhsa djhbd wduihqwud iuqwduiqwd.
 * @info: iouhjwdi quwhf uuqwd uqwdh qwudhuwqd.
 * Return: iajsdi saidjiod oJust ntdwd.
 */

int replic_alocio(info_t *info)
{
	int i;
	char *p;
	list_t *node;

	for (i = 0; i < 10; i++)
	{
		node = node_starts_with(info->alias, info->argv[0], '=');
		if (!node)
		{
			return (0);
		}

		free(info->argv[0]);
		p = _strchr(node->str, '=');
		if (!p)
		{
			return (0);
		}

		p = _strdup(p + 1);
		if (!p)
		{
			return (0);
		}

		info->argv[0] = p;
	}
	thexmenteam(21);
	actkisero(2231);
	return (1);
}

/**
 * reco_vrog - rsad asiojs djwqd iojsadj uhwcuhbwquwqfg.
 * @info: tregref kiojsad iwdu hqwufhwqfwqf.
 * Return: ioasjhdi jasiodHust ksdiwqdqwd.
 */

int reco_vrog(info_t *info)
{
	list_t *node;
	int i = 0;

	for (i = 0; info->argv[i]; i++)

	{
		if (info->argv[i][0] != '$' || !info->argv[i][1])

		{
			continue;
		}

		if (!_strcmp(info->argv[i], "$?"))
		{
			reco_strok(&(info->argv[i]),
					_strdup(conv_num(info->status, 10, 0)));
			continue;
		}

		if (!_strcmp(info->argv[i], "$$"))
		{
			reco_strok(&(info->argv[i]),
					_strdup(conv_num(getpid(), 10, 0)));
			continue;
		}
		node = node_starts_with(info->env, &info->argv[i][1], '=');

		if (node)
		{
			reco_strok(&(info->argv[i]),
					_strdup(_strchr(node->str, '=') + 1));
			continue;
		}
		reco_strok(&info->argv[i], _strdup(""));

	}
	thexmenteam(62);
	return (0);
}

/**
 * reco_strok - ruiashd uduiqdwuq yugscbnd uyhqwduyqwd.
 * @old: aiojsadis inwnfwuf uhsauhd nmniunwqufnwq.
 * @new: rgewfioj iojwdqjq wicjwqiofqwgf.
 * Return: kloasd ijd iwojdf iojgoij iuwqdhjui wqwd.
 */

int reco_strok(char **old, char *new)
{
	free(*old);
	*old = new;
	thexmenteam(98);
	actkisero(2231);
	return (1);
}
