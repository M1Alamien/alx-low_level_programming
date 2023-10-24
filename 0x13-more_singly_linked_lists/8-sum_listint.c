#include "lists.h"
/**
 * sum_listint - name
 * @head: fisrt in list
 *
 * sums all ns in list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		head = head->next;
		sum += head->n;
	}
	return (sum);
}
