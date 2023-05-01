#include "lists.h"
/**
 * reverse_listint - reversing the liste of node
 * @head: pointer to pointer
 * Return: *head
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv, *crr, *next;

	prv = NULL;
	crr = *head;
	while (crr)
	{
		next = crr->next;
		crr->next = prv;
		prv = crr;
		crr = next;
	}
	*head = prv;
	return (*head);
}
