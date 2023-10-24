#include "lists.h"
/**
 * print_listint - name
 * @h: list
 *
 * prints all the elements of list
 * Return: ncount
 */
size_t print_listint(const listint_t *h)
{
	size_t ncount = 0;

	while (h != NULL)
	{
			printf("%d\n", h->n);
			h = h->next;
			ncount++;
	}
	return (ncount);
}
