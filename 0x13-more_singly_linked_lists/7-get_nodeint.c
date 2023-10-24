#include "lists.h"
/**
 * get_nodeint_at_index - name
 * @head: first in list
 * @index: index wanted
 *
 * returns nth node of list
 * Return: NULL or *head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while ((head != NULL) && (i < index))
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
