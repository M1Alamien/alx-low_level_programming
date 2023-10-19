#include "lists.h"
/**
 * free_list - name
 * @head: first in list
 *
 * frees list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tl;

	while ((tl = head) != NULL)
	{
		head = head->next;
		free(tl->str);
		free(tl);
	}
}
