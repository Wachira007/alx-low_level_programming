#include "lists.h"

/**
*free_listint - free linked list
*@head: listhead
*Return: none
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
