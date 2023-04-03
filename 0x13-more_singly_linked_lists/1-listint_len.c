#include "lists.h"

/**
 * listint_len - function that returns number of elements in a linked list
 * @h: linked list
 * Return: returns the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
