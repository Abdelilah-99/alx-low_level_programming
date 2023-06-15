#include "lists.h"
/**
 * sum_dlistint - cal the sum of node n value
 * @head: the head node
 * Return: Total of nodes
*/
int sum_dlistint(dlistint_t *head)
{
	int Total = 0;

	while (head)
	{
		Total += head->n;
		head = head->next;
	}
	return (Total);
}
