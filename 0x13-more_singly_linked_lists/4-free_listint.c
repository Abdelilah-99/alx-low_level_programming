#include "lists.h"
/**
 * free_listint - for free
 * @head: pointer
*/
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		if (head->n)
			free(head->n);
		free(head);
	}
}
