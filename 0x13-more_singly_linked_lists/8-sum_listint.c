#include "lists.h"

/**
*sum_listint - returns sum of data in linked list
*@head: listhead
*Return: sum (n)
*/

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
