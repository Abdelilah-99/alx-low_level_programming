#include "lists.h"
/**
 * insert_dnodeint_at_index - add at index a node
 * @h: the header
 * @idx: the index
 * @n: node data
 * Return: new nod or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new_nod;
	unsigned int i = 0;

	new_nod = malloc(sizeof(dlistint_t));
	if (!new_nod)
		return (NULL);
	new_nod->n = n;
	new_nod->next = NULL;
	new_nod->prev = NULL;
	if (idx == 0)
	{
		new_nod->next = *h;
		if (*h)
			(*h)->prev = new_nod;
		*h = new_nod;
		return (new_nod);
	}
	tmp = *h;
	while (tmp && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (!tmp)
		return (NULL);
	new_nod->next = tmp->next;
	new_nod->prev = tmp;
	if (tmp->next)
		tmp->next->prev = new_nod;
	tmp->next = new_nod;
	return (new_nod);
}
