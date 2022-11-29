#include "lists.h"

/**
* pop_listint - function that deletes the head node of a listint_t
* @head: pointer to the first node
* Return: 0, if empty else the node's data
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		data = (*head)->n;
		*head = (*head)->next;
		free(temp);
		temp = NULL;
	}
	return (data);
}
