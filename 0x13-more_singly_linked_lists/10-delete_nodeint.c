#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node whent it at first
 * and when it any where
 * @head: pointer
 * @index: to know the place
 * Return: 1 succ else -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prv, *crr;
	unsigned int i = 0;

	if (head == NULL && *head == NULL)
		return (-1);
	crr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(crr);
		return (1);
	}
	if (!crr)
		return (-1);
	prv = NULL;
	for (; i < index; i++)
	{
		prv = crr;
		crr = crr->next;
	}
	prv->next = crr->next;
	free(crr);
	return (1);
}
