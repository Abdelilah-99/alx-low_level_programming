#include "lists.h"
/**
 * add_nodeint - func add node at the beginning
 * @head: pointer to pointer to list_t
 * @n: cnst n
 * Return: n or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_d;

	n_d = malloc(sizeof(listint_t));
	if (!n_d)
		return (NULL);
	n_d->n = n;
	n_d->next = *head;
	*head = n_d;
	return (n_d);
}
