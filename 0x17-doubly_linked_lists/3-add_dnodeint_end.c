#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: first node
 * @n: node value
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nod, *tmp;

	new_nod = malloc(sizeof(dlistint_t));
	if (!new_nod)
		return (NULL);
	new_nod->n = n;
	new_nod->next = NULL;
	if (*head == NULL)
	{
		*head = new_nod;
		new_nod->prev = NULL;
		return (new_nod);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_nod;
	new_nod->prev = tmp;
	return (new_nod);
}
