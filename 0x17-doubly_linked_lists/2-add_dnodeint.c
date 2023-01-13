#include "lists.h"

/**
* add_dnodeint - add a new node at the beginning
* @head: pointer to the first node
* @n: element of the node to be added
* Return: 0 if failed else pointer to new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *temp;

	if (!head)
		return (0);
	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (0);

	temp->n = n;
	if (*head)
	{

	temp->next = *head;
	(*head)->prev = temp;
	}
	*head = temp;

	return (*head);
}
