#include "lists.h"
/**
 * print_listint_safe - hslagvakjbv
 * @head: njs sf wehfiu
 * Return: i
*/
size_t print_listint_safe(const listint_t *head)
{
	unsigned int i = 0;

	if (head)
	{
		printf("[%p] %d\n", (void *)head->next, head->n);
		head = head->next;
		i++;
	}
	return (i);
}
