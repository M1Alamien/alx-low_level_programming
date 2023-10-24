#include "lists.h"
/**
 * free_listint2 - name
 * @head: first in list
 *
 * frees list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tl;

	while ((tl = head) != NULL)
	{
		head = head->next;
		free(tl);
	}
	*head = NULL;
}
