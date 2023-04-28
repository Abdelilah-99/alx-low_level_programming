#include "lists.h"
/**
 * free_list - free l lincked lists
 * @head: pointer l awal node
*/
void free_list(list_t *head)
{
	while (head)
	{
		list_t *tmp;

		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
