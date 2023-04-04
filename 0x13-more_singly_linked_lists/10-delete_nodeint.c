#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: linked list
 * @index: given position of the node to be deleted
 * Return: returns 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i;

	temp = *head;
	if (index != 0)
	{
		for (i = 1; i < index && temp != NULL; i++)
		{
			temp = temp->next;
		}
	}
	if (temp == NULL || (temp->next == NULL && index != 0))
		return (-1);
	temp2 = temp->next;
	if (index != 0)
	{
		temp->next = temp2->next;
		free(temp2);
	}
	else
	{
		free(temp);
		*head = temp2;
	}
	return (1);
}
