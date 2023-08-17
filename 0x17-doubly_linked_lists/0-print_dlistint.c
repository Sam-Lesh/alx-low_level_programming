#include "lists.h"
/**
 *print_dlistint - print the elements in the doubly link list
 *@h: double linked list
 * Return: number of elements inside the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t d = 0;

	if (h == NULL)
		return (d);

	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		d += 1;
	}
	return (d);
}
