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
 * add_node - adding new node to the begining
 * @head: pointer to pointer head -> head -> &list_t
 * @str: string
 * Return: new_node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _len(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
