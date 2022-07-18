#include "lists.h"

/**
*add_nodeint - new node at the beginning
*@head: head of a list
*@n: n element
*Return: address or NUll if fail
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
