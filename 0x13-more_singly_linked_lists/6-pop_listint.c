#include "lists.h"
/**
 * pop_listint - we delete the head node
 * @head: pointer to the head
 * Return: 0
*/
int pop_listint(listint_t **head)
{
	listint_t *h_delete;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	h_delete = *head;
	*head = h_delete->next;
	n = h_delete->n;
	free(h_delete);
	return (n);
}
