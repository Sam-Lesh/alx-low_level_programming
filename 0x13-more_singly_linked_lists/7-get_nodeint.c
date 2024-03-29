#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list
 * @head: linked list
 * @index: nth number of the linked list
 * Return: returns the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
