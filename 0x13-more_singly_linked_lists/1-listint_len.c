#include "lists.h"

/**
* listint_len - function that returns the number of elements in a linkedlist.
* @h: pointer to the first element
* Return: no of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
