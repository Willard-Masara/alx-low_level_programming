#include "lists.h"
/**
*add_nodeint_end-adds new node @tail
*@head: head of th list
*@n:int data for node
*
*Return: NULL or address of the new node elemnt
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	*head = new;
	else
	{
	last = *head;
	while (last->next != NULL)
	last = last->next;
	last->next = new;


	}
	return (*head);



}
