#include "lists.h"
/**
 * free_dlistint - freing memory
 * @head: first
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
