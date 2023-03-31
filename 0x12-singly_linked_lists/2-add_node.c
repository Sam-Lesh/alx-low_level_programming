#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: head of the linked list
 * @str: new string to be stored in the linked list
 * Return: returns address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new->len = n;
	new->next = *head;
	*head = new;

	return (*head);
}
