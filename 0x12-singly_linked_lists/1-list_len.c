#include "lists.h"
/**
 * list_len - name
 * @h: list
 *
 * returns num of elements in list
 * Return: elemcount
 */
size_t list_len(const list_t *h)
{
	size_t elemcount = 0;

	while (h != NULL)
	{
		h = h->next;
		elemcount++;
	}
	return (elemcount);
}
