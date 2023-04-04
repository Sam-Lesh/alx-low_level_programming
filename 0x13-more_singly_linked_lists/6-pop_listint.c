#include "lists.h"

/**
 * pop_listint_t - a function that deletes the head node of a linked list
 * @head: linked list
 * Return: returns the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *pemt;
	int i;

	temp = *head;

	if (*head == NULL)
		return (0);

	pemt = temp->next;
	i = temp->n;
	*head = pemt;
	free(temp);

	return (i);
}
