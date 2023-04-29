#include "lists.h"
/**
 * free_listint2 - free mem
 * @head: poiter to pointer
 * Return: -
*/
void free_listint2(listint_t **head)
{
	listint_t *nxt;

	if (!head)
		return;
	while (*head)
	{
		nxt = (*head)->next;
		free(*head);
		*head = nxt;
	}
}
