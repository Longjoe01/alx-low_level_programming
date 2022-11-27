#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t list
* @head: a pointer to the first node of list_t list
* @str: the string to be added to the list_t list
* Return: NULL or address of new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t n;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	new_node->len = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
