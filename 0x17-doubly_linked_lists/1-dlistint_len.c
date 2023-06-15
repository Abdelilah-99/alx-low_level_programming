#include "lists.h"
/**
 * dlistint_len - cal nmbr of elem
 * @h: the head
 * Return: nmbr of elem
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
