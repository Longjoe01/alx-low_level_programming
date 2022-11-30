#include "lists.h"

/**
* insert_nodeint_at_index - function that inserts a new node at a given pos
* @head: pointer to the first node
* @n: data of the new node
* @idx: index of the list where the new node would be added
* Return: null if not possible else newnode
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *ptr2;
	unsigned int pos = 0;

	ptr2 = malloc(sizeof(listint_t));
	ptr = *head;

	if (ptr2 == NULL)
	{
		return (NULL);
	}

	ptr2->n = n;
	ptr2->next = NULL;
	while (pos != (idx - 1))
	{
		ptr = ptr->next;
		pos++;
	}
	ptr2->next = ptr->next;
	ptr->next = ptr2;
	return (ptr2);
}

