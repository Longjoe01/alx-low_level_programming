#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: list head
 * @index: position of node to get
 * Return: node at index or Null
 */
listint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
