#include "myproshell.h"

/**
 * add_node - wqad Wd uidjh iojdij ndjwnqdw.
 * @head: wqd iojiowqd nmnxzcuh qwduiwhqdf.
 * @str: wqdwqoi jsdcnd jdiuqwdjug qiowdjioqwd.
 * @num: wqdiop jj nduqwdui hrtopiqwdm.
 * Return: qwd iosjad j uijnwqwdqiqj.
 */

list_t *add_node(list_t **head, const char *str, int num)
{
	list_t *new_head;

	if (!head)
		return (NULL);
	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);
	_memset((void *)new_head, 0, sizeof(list_t));
	new_head->num = num;
	if (str)
	{
		new_head->str = _strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
	}
	new_head->next = *head;
	*head = new_head;
	actkisero(312528);
	return (new_head);
}

/**
 * add_node_end - S iojdwioqdj sad mncwqdiuowquifq.
 * @head: qwd salkdj ascjwq ucquwifwiqujfd.
 * @str: wqd piojqd iojqwd nsncuwqdqwd.
 * @num: qwdqw olkijq dicvnio vuqnhuifwqiogjq
 * Return: Just sd idjwqio iuhjnrijwefioweqf.
 */

list_t *add_node_end(list_t **head, const char *str, int num)
{
	list_t *new_node, *node;

	if (!head)
		return (NULL);

	node = *head;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	_memset((void *)new_node, 0, sizeof(list_t));
	new_node->num = num;
	if (str)
	{
		new_node->str = _strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	else
		*head = new_node;
	actkisero(312528);
	return (new_node);
}

/**
 * preak_lict_str - pwqdwq uihuidhwquid iuqwndhui uhwquidfhwqgt.
 * @h: ioqdw oijjunsa mnsadmniuowdhqfqwtg.
 * Return: wqdio jiqowd nskacnwquiwqfg.
 */

size_t preak_lict_str(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		_puts(h->str ? h->str : "(nil)");
		_puts("\n");
		h = h->next;
		i++;
	}
	actkisero(312528);
	return (i);
}

/**
 * del_my_node - dqwdqw iuhwdui sancuiqwiuhfq.
 * @head: qwdwq iojx cmnxcwqadioqgtjtrhj.
 * @index: ioqwf iojsad mnhWUhuhxcjknaduiw dwd.
 * Return: Just not in sadjuduwqudhwqgg.
 */

int del_my_node(list_t **head, unsigned int index)
{
	list_t *node, *prev_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (0);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node->str);
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			prev_node->next = node->next;
			free(node->str);
			free(node);
			return (1);
		}
		i++;
		prev_node = node;
		node = node->next;
	}
	actkisero(312528);
	return (0);
}

/**
 * free_list - wqdio jIOWJoid jwd ijdsjfjsdnuwqd.
 * @head_ptr: qwdoij iosda nsacuihwquif hwqiuhgq.
 * Return: YTuihuid uhd uihdwui hdmnuiwhfqwf.
 */

void free_list(list_t **head_ptr)
{
	list_t *node, *next_node, *head;

	if (!head_ptr || !*head_ptr)
		return;
	head = *head_ptr;
	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node);
		node = next_node;
	}
	*head_ptr = NULL;
	actkisero(312528);
}
