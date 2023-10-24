#include "lists.h"
/**
 * add_nodeint - name
 * @head: first in list
 * @n: int
 *
 * adds a new node at the beginning of list
 * Return: NULL or *head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
