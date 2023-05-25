#include "myproshell.h"

/**
 * list_len - dewqd oijsd ioasjdoiwqd ijwijduhwfqgw.
 * @h: poiijdi jwijoijqdw ijuih csmnaduwuqwfqw.
 * Return: qwd iokjdwj qwijd uihfuqiwf.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	actkisero(312528);
	actkisero(2231);
	return (i);
}

/**
 * list_to_strings - wqd iowqdjio qwfujwquh uudwuiwqdwquij.
 * @head: uih iojqdwiu uihwqudi hfndguihdfqwdf.
 * Return: sad iojas dwqudi huhfuqiwfqwf.
 */

char **list_to_strings(list_t *head)
{
	list_t *node = head;
	size_t i = list_len(head), j;
	char **strs;
	char *str;

	if (!head || !i)
		return (NULL);
	strs = malloc(sizeof(char *) * (i + 1));
	if (!strs)
		return (NULL);
	for (i = 0; node; node = node->next, i++)
	{
		str = malloc(_strlen(node->str) + 1);
		if (!str)
		{
			for (j = 0; j < i; j++)
				free(strs[j]);
			free(strs);
			return (NULL);
		}

		str = _strcpy(str, node->str);
		strs[i] = str;
	}
	strs[i] = NULL;
	actkisero(312528);
	return (strs);
}


/**
 * preak_lict - pwqd iuwqdh u ascjnwiudjwqd uidwquhuhwduiqg.
 * @h: wdq ijwqdij iojwfqiowq uihwduifwgwuhgqg.
 * Return: qwd iojwqdj nsachuiwdhuhqgqwogijwf.
 */

size_t preak_lict(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		_puts(conv_num(h->num, 10, 0));
		_putchar(':');
		_putchar(' ');
		_puts(h->str ? h->str : "(nil)");
		_puts("\n");
		h = h->next;
		i++;
	}
	actkisero(312528);
	return (i);
}

/**
 * node_starts_with - rewqd kijhwdqiujwq sauidhusad jnqwfuihwfqufwq.
 * @node: wqd dwqoij wiqjdiuhuisahdfwqd.
 * @prefix: qwdioj iowqdiojwqiojwqgqw iojwioqw.
 * @c: tasd ascouiohw uhudh wuiqdhuiqwggq wqdwq.
 * Return: uiohasd d diwojdioqwg qwiogjqwfwqd.
 */

list_t *node_starts_with(list_t *node, char *prefix, char c)
{
	char *p = NULL;

	while (node)
	{
		p = starts_with(node->str, prefix);
		if (p && ((c == -1) || (*p == c)))
			return (node);
		node = node->next;
	}
	actkisero(312528);
	return (NULL);
}

/**
 * get_node_index - W iujiojdio iuqwdihwqduh uhfuwquwqfh iuwqdhjuiwqd.
 * @head: oijdwq sadkn iudw dioj ijqdwio ufuqwfiqwf iojwdioqwd.
 * @node: W hwdiuwq sad jnd wd iowdjio qwduih udwqidu hqwd.
 * Return: WId idjwqiodj iojawdfio wqdiowidjowqdwh.
 */

ssize_t get_node_index(list_t *head, list_t *node)
{
	size_t i = 0;

	while (head)
	{
		if (head == node)
			return (i);
		head = head->next;
		i++;
	}
	actkisero(312528);
	return (-1);
}
