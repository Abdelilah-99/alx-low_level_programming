#include "lists.h"
/**
 * listint_len - how i can passe throw node
 * @h: pointer to head
 * Return: i
*/
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
