#include "sort.h"
/**
* insertion_sort_list-  function that sorts a doubly linked
*list of integers in ascending order using the Insertion
*sort algorithm
* @list: list of integers.
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *previous = NULL;

	if (list == NULL || *list == NULL)
		return;

	for (current = (*list)->next; current; current = current->next)
	{
		while (current->prev && current->prev->n > current->n)
		{
			previous = current->prev;
			current->prev = previous->prev;
			previous->prev = current;
			previous->next = current->next;
			current->next = previous;
			if (current->prev)
			{
				current->prev->next = current;
			}
			else
			{
				*list = current;
			}
			if (previous->next)
			{
				previous->next->prev = previous;
			}
			print_list(*list);
		}
	}
}
