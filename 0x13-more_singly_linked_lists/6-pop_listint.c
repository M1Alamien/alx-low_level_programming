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
	listint_t *tl;

	if (head == NULL)
		return (0);
	else
	{
		tl = *head;
		i = tl->n;
		tl = tl->next;
		free(head);
		head = malloc(sizeof(listint_t));
		*head = tl;
	}
	return (i);
}
