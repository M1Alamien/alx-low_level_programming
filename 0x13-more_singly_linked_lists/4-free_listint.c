#include "lists.h"
/**
 * free_listint - name
 * @head: first in list
 *
 * frees list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tl;

	while ((tl = head) != NULL)
	{
		head = head->next;
		free(tl);
	}
}
