#include "lists.h"
/**
 * insert_nodeint_at_index - name
 * @head: first in list
 * @idx: index
 * @n: int
 *
 * inserts a new node at idx
 * Return: NULL or temp
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tl, *tl2, *temp;

	tl = *head;
	if (idx != 0)
	{
		while ((tl != NULL) && (i < idx))
		{
			if (tl->next == NULL)
				return (NULL);
			tl = tl->next;
			i++;
		}
	}
	if (tl == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	temp->next = tl;
	i = 0;
	tl2 = *head;
	while (i < (idx - 1))
	{
		tl2 = tl2->next;
		i++;
	}
	tl2->next = temp;
	return (temp);
}
