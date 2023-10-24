#include "lists.h"
/**
 * delete_nodeint_at_index - name
 * @head: first in list
 * @index: index
 *
 * deletes node at index
 * Return: -1 or 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *nl, *pl;

	pl = *head;
	if (index != 0)
	{
		for (i = 0; (i < index - 1) && (pl != NULL); i++)
		{
			pl = pl->next;
		}
	}
	if ((pl->next == NULL && index != 0) || pl == NULL)
		return (-1);
	nl = pl->next;
	if (index != 0)
	{
		pl->next = nl->next;
		free(nl);
	}
	else
	{
		free(pl);
		*head = nl;
	}
	return (1);
}
