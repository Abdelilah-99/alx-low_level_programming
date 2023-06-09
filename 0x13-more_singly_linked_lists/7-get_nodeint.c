#include "lists.h"
/**
 * get_nodeint_at_index - function return the node th we want
 * @head: pointer to the list
 * @index: indexing at some node
 * Return: NULL or the th NODe
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
