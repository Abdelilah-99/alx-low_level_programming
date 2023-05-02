#include "lists.h"
/**
 * insert_nodeint_at_index - function that create a node
 * @head: pointer
 * @idx: index wher the nod will be
 * @n: value
 * Return: NULL or add_node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *add_node, *tmp;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	add_node = malloc(sizeof(add_node));
	if (!add_node)
		return (NULL);
	add_node->n = n;
	add_node->next = NULL;
	if (idx == 0)
	{
		add_node->next = *head;
		*head = add_node;
		return (add_node);
	}
	tmp = *head;
	if (!tmp)
		return (NULL);
	while (tmp && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	add_node->next = tmp->next;
	tmp->next = add_node;
	return (add_node);
}
