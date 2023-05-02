#include "lists.h"
#include <stdlib.h>
/**
*pop_listint-to delete the head node
*@head: double pointer
*
*Return: nada
*/
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
	return (0);
	start = *head;
	*head = start->next;
	n = start->nc;
	free(start);
	return (n);




}
