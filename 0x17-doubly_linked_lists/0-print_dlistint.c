#include "lists.h"

/**
* print_dlistint - prints a list
* @h: pointer to the first node
* Return: lenght of list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
