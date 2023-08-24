#include "lists.h"
/**
 *insert_dnodeint_at_index - insert node into a doubly linked list
 *@h: doubly linked list
 *@idx: position to store the value
 *@n: value to store
 *Return: doubly linked list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL, *tmp_ = NULL;
	unsigned int num = 0;

	if (h == NULL)
		return (NULL);
	if (*h == NULL || idx == 0)
	{
		temp = add_dnodeint(h, n);
		return (temp);
	}
	for (tmp_ = *h; tmp_; num++, tmp_ = tmp_->next)
		;
	if (idx == num)
	{
		temp = add_dnodeint_end(h, n);
		return (temp);
	}
	if (idx > num)
		return (NULL);
	tmp_ = *h;
	num = 1;
	while (tmp_ != NULL)
	{
		if (num == idx)
		{
			temp = malloc(sizeof(dlistint_t));
			if (temp == NULL)
				return (NULL);
			temp->n = n;
			temp->next = tmp_->next;
			temp->prev = tmp_;
			tmp_->next->prev = temp;
			tmp_->next = temp;
			break;
		}
		tmp_ = tmp_->next;
		num++;
	}
	return (temp);
}