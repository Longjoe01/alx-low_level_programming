#include "lists.h"

/**
* dlistint_len - gets the lenght of a list
* @h: pointer to the first node
* Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
