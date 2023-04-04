#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts new node at a given position
 * @head: linked list
 * @idx: index of the list where the new node should be added
 * @n: new number to be added
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	if (idx != 0)
	{
		for (i = 1; i < idx && temp != NULL; i++)
		{
			temp = temp->next;
		}
	}
	if (temp == NULL && idx != 0)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
