#include "lists.h"
/**
 * _len - func cal the len
 * @s: pointer to str
 * Return: len
*/
int _len(const char *s)
{
	int len = 0;

	for (; s[len]; len++)
		;
	return (len);
}

/**
 * add_node_end - function katziid node f talii
 * @head: pointer pointer l list_t
 * @str: string
 * Return: NULL or new if head = NULL or tmp->next != NULL
 * here we know that we are on the last node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);
	list_t *tail, *tmp;

	tail = malloc(sizeof(list_t));
		if (tail == NULL)
			return (NULL);
	tail->str = strdup(str);
	tail->len = _len(str);
	tail->next = NULL;
	if (tail->str == NULL)
		free(tail);
	return (NULL);
	if (*head == NULL)
	{
		*head = tail;
		return (tail);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = tail;
	return (tail);
}
