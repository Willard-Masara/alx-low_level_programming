#include "lists.h"
#include <stdlib.h>
/**
*delete_nodeint_at_index-to delete node at index
*@head: head of list
*@index:node index
*
*Return: ptr to index node
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i;
	listint_t *tempo, *next;

	if (head == NULL || *head == NULL)
	return (-1);
	if (index == 0)
	{
	next = (*head)->next;
	free(*head);
	*head = next;
	return (1);
	}
	tempo = *head;
	for (i = 0; i < index - 1; i++)
	{
	if (tempo->next == NULL)
	return (-1);
	tempo = tempo->next;

	}
	next = tempo->next;
	tempo->next = next->next;
	free(next);
	return (1);



}
