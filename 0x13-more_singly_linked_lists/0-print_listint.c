#include "lists.h"
/**
 * print_listint - func to print
 * @h: pointer to head
 * Return: i
*/
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	i++;
	}
	return (i);
}
