#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */

int check_cycle(listint_t *list)
{
	listint_t *w, *l;

	if (list == NULL || list->next == NULL)
		return (0);

	w = list->next;
	l = list->next->next;

	while (w && l && l->next)
	{
		if (w == l)
			return (1);

		w = w->next;
		l = l->next->next;
	}

	return (0);
}
