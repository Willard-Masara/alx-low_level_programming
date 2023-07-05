#include "lists.h"
/**
*reverse_listint-intersting fx to reverse listint_t
*@head: double ptr
*
*Return: ptr to head node of reversed list
*/
listint_t *reverse_listint(listint_t **head)
{

	listint_t *previous, *next;

	if (head == NULL || *head == NULL)
	return (NULL);
	if ((*head)->next == NULL)
	return (*head);
	previous = NULL;
	while (*head != NULL)
	{
	next = (*head)->next;
	(*head)->next = previous;
	previous = *head;
	*head = next;


	}
	*head = previous;
	return (*head);


}
