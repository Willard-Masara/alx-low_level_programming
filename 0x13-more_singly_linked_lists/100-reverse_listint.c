#include "lists.h"
/**
*reverse_listint-intersting fx to reverse listint_t
*@head: double ptr
*
*Return: ptr to head node of reversed list
*/
listint_t *reverse_listint(listint_t **head)
{

	listint_t *last, *next;

	if (head == NULL || *head == NULL)
	return (NULL);
	if ((*head)->next == NULL)
	return (*head);
	last = NULL;
	while (*head != NULL)
	{
	next = (*head)->next;
	(*head)->next = last;
	last = *head;
	*head = next;


	}
	*head = last;
	return (*head);


}
