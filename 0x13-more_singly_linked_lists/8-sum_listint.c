#include "lists.h"

/**
 * sum_listint - function that returns the sum of all (n) of a linked list
 * @head: linked list
 * Return:  returns the sum of all the data (n) of the linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	int i;

	if (head == NULL)
		return (0);
	for (i = 0; head->next != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum + head->n);
}
