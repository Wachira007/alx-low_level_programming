#include "lists.h"

/**
*listint_len - no. of elements in a list
*@h: head of a list.
*Return: numbers of nodes.
*/

size_t listint_len(const listint_t *h)

{
	size_t s = 0;

	while (h != NULL)
	{
		h = h->next;
		s++;
	}
	return (s);
}
