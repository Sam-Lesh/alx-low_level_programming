#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: linked list
 * @n: element of the list
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	new->n = n;
	*head = new;
	return (*head);
}
