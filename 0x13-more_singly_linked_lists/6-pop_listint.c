#include "lists.h"
/**
 * pop_listint - name
 * @head: first in list
 *
 * deletes the head node of list
 * Return: 0 or n
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *tl, *tl2;

	if (*head == NULL)
		return (0);

	tl = *head;
	i = tl->n;
	tl2 = tl->next;
	free(tl);
	*head = tl2;
	return (i);
}
