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
		while ((temp = tl) != NULL)
		{
			tl = tl->next;
			free(temp);
		}
		*head = NULL;
	}
}
