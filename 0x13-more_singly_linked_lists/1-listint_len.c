#include "lists.h"
/**
 * listint_len - name
 * @h: list
 *
 * returns num of elements in list
 * Return: i
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
