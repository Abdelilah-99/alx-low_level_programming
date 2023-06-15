#include "lists.h"
/**
 * add_dnodeint - add nod at the beginning
 * @head: the head nod
 * @n: the value of the node
 * Return: the new node
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nod;

	new_nod = malloc(sizeof(dlistint_t));
	if (!new_nod)
		return (NULL);
	if (*head == NULL)
	{
		new_nod->n = n;
		new_nod->next = NULL;
		new_nod->prev = NULL;
		*head = new_nod;
	}
	else
	{
		new_nod->n = n;
		new_nod->prev = NULL;
		new_nod->next = *head;
		(*head)->prev = new_nod;
		*head = new_nod;
	}
	return (new_nod);
}
