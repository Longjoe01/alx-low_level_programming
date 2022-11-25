#include "lists.h"

/**
* size_t print_list - function that prints all the elements
* @h: pointer to the first member of the list
* Return: no of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count;
	count = 0;

	while ( h != NULL)
	{
		if ( h -> str == NULL)
		{
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h -> len h -> str);
			h = h -> next;
			count++;
		}
	return (count);
}
