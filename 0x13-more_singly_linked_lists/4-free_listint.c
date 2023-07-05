#include "lists.h"

/**
*free_listint- to free listint_t list
*@head:head of list to be freed
*
*Return: nada
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
	tmp = head->next;
	free(head);
	head = tmp;


	}



}
