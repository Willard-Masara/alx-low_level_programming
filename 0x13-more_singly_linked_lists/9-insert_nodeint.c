#include "lists.h"
#include <stdlib.h>

/**
*insert_nodeint_at_index-insert node at some position
*@head: double ptr
*@idx: node index
*
*Return: addrss of nu node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tempo, *new;

	if (head == NULL)
	return (NULL);

	if (idx != 0)
	{
	tempo = *head;
	for (i = 0; idx - 1 && tempo != NULL; i++)
	{
	tempo = tempo->next;

	}
	if (tempo == NULL)
	return (NULL);

	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	if (idx == 0)
	{
	new->next = *head;
	*head = new;
	return (new);


	}
	new->next = tempo->next;
	tempo->next = new;
	return (new);
}
