#include "lists.h"

/**
* add_dnodeint_end - adds node at the end of a list
* @head: pointer to the firstnode
* @n: data
* Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr;

	if (!head)
		return (NULL);

	temp = malloc(sizeof(dlistint_t));

	if (!temp)
		return (NULL);
	temp->n = n;

	if (!(*head))
	{
		*head = temp;
		return (temp);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;
	temp->prev = ptr;
	return (*head);
}

