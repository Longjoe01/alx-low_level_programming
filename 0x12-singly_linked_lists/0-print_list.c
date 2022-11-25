#include "lists.h"

/**
* print_list - function that prints all the elements
* @h: pointer to the first member of the list
* Return: no of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
			count++;
			h = h->next;
		}
	}
	return (count);
}
