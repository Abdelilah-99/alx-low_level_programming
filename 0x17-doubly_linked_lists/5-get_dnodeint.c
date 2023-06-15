#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: the head nde
 * @index: the nth node
 * Return: NULL in fail or tmp
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (i == index)
			return (tmp);
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
