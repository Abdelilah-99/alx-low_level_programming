#include "lists.h"
/**
 * print_dlistint - printing elem of doubly ...
 * @h: the head
 * Return: number of elem
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *crr;
	int i = 0;

	crr = h;
	while (crr)
	{
		printf("%d\n", crr->n);
		crr = crr->next;
		i++;
	}
	return (i);
}
