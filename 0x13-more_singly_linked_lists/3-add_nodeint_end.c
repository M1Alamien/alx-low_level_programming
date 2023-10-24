#include "lists.h"
/**
 * add_nodeint_end - name
 * @head: first in list
 * @n: int
 *
 * adds a new node at the end of list
 * Return: NULL or *head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *temp2;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	temp2 = *head;
	if (temp2 == NULL)
		*head = temp;
	else
	{
		while (temp2->next != NULL)
			temp2 = temp2->next;
		temp2->next = temp;
	}
	return (*head);
}
