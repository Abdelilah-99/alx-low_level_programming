#include "lists.h"
/**
 * print_list - print what inside list_t
 * @h: pointer to struct
 * Return: i or NULL
*/
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%i] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		i++;
		h = h->next;
	}
	return (i);
}
