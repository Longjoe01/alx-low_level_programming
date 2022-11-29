#include "lists.h"

/**
* get_nodeint_at_index -  function that returns the nth node
* @index: index of the node, starting at 0
* @head: pointer to the first node
* Return: NULL if node does not exist.else,return node.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int nth_node = 0;

	ptr = head;
	while (index != nth_node)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			ptr = ptr->next;
			nth_node++;
		}
		if (ptr == NULL)
			return (NULL);
	}
	return (ptr);
}
