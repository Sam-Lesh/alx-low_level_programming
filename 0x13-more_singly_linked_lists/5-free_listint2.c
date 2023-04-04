#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: linked list
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	if (head != NULL)
	{
		temp = *head;
		while ((temp2 = temp) != NULL)
		{
			temp = temp->next;
			free(temp2);
		}
		*head = NULL;
	}
}

