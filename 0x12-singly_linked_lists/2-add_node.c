#include <stddef.h>
#include "lists.h"
/**
 * add_node - name
 * @head: first in list
 * @str: str in list
 *
 * adds a new node at the beginning of list
 * Return: *head or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	size_t len1;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	for (len1 = 0; str[len1]; len1++)
	{

	}
	temp->len = len1;
	temp->next = *head;
	*head = temp;
	return (*head);
}
