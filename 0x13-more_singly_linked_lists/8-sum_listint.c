#include "lists.h"
/**
 * sum_listint - name
 * @head: fisrt in list
 *
 * sums all ns in list
 * Return: sum
 sum += head->n;*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
