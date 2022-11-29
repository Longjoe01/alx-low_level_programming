#include "lists.h"

/**
* add_nodeint_end - function that adds a new node at the end
* @head: pointer to the pointer that points to the first node
* @n: the element of the node
* Return: NULL, if failed else address of the newnode
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *ptr;

	ptr = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = newnode;
	}
	return (*head);
}
