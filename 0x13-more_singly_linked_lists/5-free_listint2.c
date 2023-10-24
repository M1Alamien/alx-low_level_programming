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
	listint_t *tl, *temp;

	if (head != NULL)
	{
		tl = *head;
		while ((tl = temp) != NULL)
		{
			temp = temp->next;
			free(tl);
		}
		*head = NULL;
	}
}
