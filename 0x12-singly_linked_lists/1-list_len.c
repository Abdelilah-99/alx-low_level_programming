#include "lists.h"
/**
 * list_len - just counting number of node or element
 * @h: in this programme when h is refering to next
 * we will pass to the next element
 * Return: i
 *
*/
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
