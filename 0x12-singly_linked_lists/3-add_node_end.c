#include "lists.h"
/**
 * add_node_end - name
 * @head: first in list
 * @str: str in list
 *
 * adds a new node at the end of list
 * Return: NULL or *head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *temp2;
	size_t len1;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	for (len1 = 0; str[len1]; len1++)
	{

	}
	temp->len = len1;
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
