#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
*add_node-to add node at head of new list
*@head: first of a list
*@str: string to add to node
*
*Return: new list address or NULL
*/

list_t *add_node(list_t **head, const char *str)

{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
	return (NULL);

	while (str[length])
	length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
