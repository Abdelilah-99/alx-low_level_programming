#include "lists.h"
/**
 * sum_listint - function that sum all n
 * @head: pointing to listint
 * Return: sum or 0 if the list empty
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
