#include "lists.h"
/**
 * delete_dnodeint_at_index - delet node at index
 * @head: the head pointer
 * @index: the node we want to delete
 * Return: 1 or -1 on fail
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (-1);
	}
	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (!tmp)
		return (-1);
	tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
