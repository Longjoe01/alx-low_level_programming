#include "lists.h"

/**
* sum_listint -  function that returns the sum of all the data
* @head: pointer to the first node of the list
* Return: 0 if list is empty,else sum
*/

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
