#include "sort.h"

/**
 * insertion_sort_list -function to Sorts a doubly linked list
 * in ascending order using the insertion_sort algorithm.
 * @list: The doubly linked list to be sorted.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *next_node = NULL;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;

	for (; current; current = next_node)
	{
		next_node = current->next;

		while (current->prev && current->prev->n > current->n)
		{
		/* Adjust pointers to perform the swap */
			current->prev->next = current->next;

			if (current->next)
				current->next->prev = current->prev;
			current->next = current->prev;
			current->prev = current->next->prev;
			current->next->prev = current;

			if (!current->prev)
				*list = current;
			else
				current->prev->next = current;

		/*print the list after the swap	 */
			print_list(*list);
		}
		current = next_node;
	}
}
