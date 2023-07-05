#include <stdlib.h>
#include "lists.h"
/**
*add_nodeint- to add a new node at beginning of listint_t
*@head:head of list
*@n:int for new node to have as data
*
*Return:address ofnew node or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *nu;

	nu = malloc(sizeof(listint_t));
	if (!nu)
	return (NULL);

	nu->n = n;
	nu->next = *head;

	*head = nu;
	return (nu);




}
