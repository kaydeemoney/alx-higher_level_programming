#include "lists.h"

/**
 * check_cycle - check for loop in LL
 * @list: head of linked list
 *
 * Description - check for loops in LL
 * Return: 1 if cycled, 0 if not
 */

int check_cycle(listint_t *list)
{
	listint_t *kay1, *kay2;

	if (!list)
	{
		return (0);
	}
	kay1 = list;
	kay2 = list->next;
	while (kay2 && kay1 && kay2->next)
	{
		if (kay1 == kay2)
		{
			return (1);
		}
		kay1 = kay1->next;
		kay2 = kay2->next->next;
	}
	return (0);
}
