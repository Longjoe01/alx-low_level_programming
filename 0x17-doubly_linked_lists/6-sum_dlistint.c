#include "lists.h"

/**
 * sum_dlistint - sum all data
 * @head: list head
 * Return: sum of data or 0,if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
