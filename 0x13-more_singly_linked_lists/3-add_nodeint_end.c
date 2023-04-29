#include "lists.h"
/**
 * add_nodeint_end - add new node at thee begining
 * @head: double pointer to lis-t
 * @n: cnt val
 * Return: i or NULL
 *
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	if (head == NULL)
		return (NULL);	
	new = malloc(sizeof(listint_t));
		if (new == NULL)
			free(new);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
