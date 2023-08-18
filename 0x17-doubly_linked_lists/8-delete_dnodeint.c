#include "lists.h"
/**
 *delete_dnodeint_at_index - insert node into a doubly linked list
 *@head: doubly linked list
 *@index: position to store the value
 *Return: doubly linked list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int num = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	for (temp = *head; temp; num++)
		temp = temp->next;
	if (index >= num)
		return (-1);
	num = 0;
	temp = *head;
	while (temp)
	{
		if (num == index)
		{
			if (index == 0 && temp->next)
			{
				*head = temp->next;
				(*head)->prev = NULL;
				free(temp);
			}
			else if (index == 0 && !(temp->next))
			{
				free(*head);
				*head = NULL;
			}
			else
			{
				if (temp->next)
					(temp->next)->prev = temp->prev;
				(temp->prev)->next = temp->next;
				free(temp);
			}
			return (1);
		}
		num++;
		temp = temp->next;
	}
	return (-1);
}
