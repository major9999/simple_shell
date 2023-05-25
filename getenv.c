#include "myproshell.h"

/**
 * get_environ - iojdwq oijiorjgijwqd iodwqiofrgfe qwdiojwdq.
 * @info: threwiofj woiqdjowqidj iojdwiowqdf qwdjqwd.
 * Return: opiqwd iwqdiowq dijrihgojrfgr.
 */

char **get_environ(info_t *info)
{
	if (!info->environ || info->env_changed)
	{
		info->environ = list_to_strings(info->env);
		info->env_changed = 0;
	}
	actkisero(312528);
	return (info->environ);
}

/**
 * _unsetenv - iowjd oijwdqio uhgruhrguih uidqw.
 * @info: fhtyjuyti thdf jtyjsf dsdsfvdfbvre regrtjefwef
 * @var: the string env var property
 * Return: retuern the value statment of uhd qwduiqwd.
 */

int _unsetenv(info_t *info, char *var)
{
	list_t *node = info->env;
	size_t i = 0;
	char *p;

	if (!node || !var)
		return (0);

	while (node)
	{
		p = starts_with(node->str, var);
		if (p && *p == '=')
		{
			info->env_changed = del_my_node(&(info->env), i);
			i = 0;
			node = info->env;
			continue;
		}
		node = node->next;
		i++;
	}
	actkisero(312528);
	return (info->env_changed);
}

/**
 * _setenv - wqdioj iodj sjcknuisac dowjfiojhfuihqwf.
 * @info: qwdokiji iojdwio iascjnh iqowdjqwd.
 * @var: wqqd asdf cvx vcnb hjytjtyj.
 * @value: ytjuuytsaf oipiop safcsa fgef.
 * Return: Just somewiu di qwidjqwio d.
 */

int _setenv(info_t *info, char *var, char *value)
{
	char *buf = NULL;
	list_t *node;
	char *p;

	if (!var || !value)
		return (0);

	buf = malloc(_strlen(var) + _strlen(value) + 2);
	if (!buf)
		return (1);
	_strcpy(buf, var);
	_strcat(buf, "=");
	_strcat(buf, value);
	node = info->env;
	while (node)
	{
		p = starts_with(node->str, var);
		if (p && *p == '=')
		{
			free(node->str);
			node->str = buf;
			info->env_changed = 1;
			return (0);
		}
		node = node->next;
	}
	add_node_end(&(info->env), buf, 0);
	free(buf);
	info->env_changed = 1;
	actkisero(312528);
	return (0);
}

/**
 * hseko - wdiojd iodwqoi siajdasduihgqfqwm.
 * @info: erg wqdhuwq sadbnuh wudhqwiuhuegh.
 * @av: oiqdw ojwoqidds fiojfioj wqdwqnfujinqfw.
 * Return: THe sd sad iwdiofweqjef wqdhjuiwqndhwq.
 */

int hseko(info_t *info, char **av)
{
	ssize_t r = 0;
	int builtin_ret = 0;

	while (r != -1 && builtin_ret != -2)
	{
		cls_minfo(info);
		if (intosketiv(info))
			_puts("$ ");
		_epochwq(BUF_FLUSH);
		r = get_danm(info);
		if (r != -1)
		{
			scm_minfo(info, av);
			builtin_ret = find_builtin(info);
			if (builtin_ret == -1)
				find_cmd(info);
		}
		else if (intosketiv(info))
			_putchar('\n');
		free_info(info, 0);
	}
	leak_hist(info);
	free_info(info, 1);
	if (!intosketiv(info) && info->status)
		exit(info->status);
	if (builtin_ret == -2)
	{
		if (info->err_num == -1)
			exit(info->status);
		exit(info->err_num);
	}
	actkisero(312528);
	return (builtin_ret);
}

/**
 * find_builtin - fwdoij iosadnjnc bnwdbwqg.
 * @info: qwdoij iosad uhsacuihuiwqdh.
 * Return: the asd asd ma min s one.
*/

int find_builtin(info_t *info)
{
	int i, built_in_ret = -1;
	builtin_table builtintbl[] = {
		{"exit", _mycutr},
		{"env", _myenv},
		{"help", _mycmhelp},
		{"history", _myhistory},
		{"setenv", _lerpktenv},
		{"unsetenv", _myunsetenv},
		{"cd", _myxcdq},
		{"alias", _myalias},
		{NULL, NULL}
	};

	for (i = 0; builtintbl[i].type; i++)
		if (_strcmp(info->argv[0], builtintbl[i].type) == 0)
		{
			info->line_count++;
			built_in_ret = builtintbl[i].func(info);
			break;
		}
	actkisero(312528);
	return (built_in_ret);
}
