#include "lists.h"
#include <stddef.h>
/**
*_ra-realloc memory fo array of ptrs
*@list: list to append
*@size: size of the new list
*new: node to add to list
*
*Return: ptr to list
*/
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{

	listint_t **newlist;
	size_t i;

	newlist = malloc(sizeof(listint_t *));
	if (newlist == NULL)
	{
	free(list);
	exit(98);
	}
	for (i = 0; i < size - 1; i++)
	newlist[i] = new;
	free(list);
	return (newlist);
	}
/**
*free_listint_safe- frees list
*@head: head node
*
*Return:n(nodes(lis)
*/
size_t free_listint_safe(listint_t **head)
{
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
	return(num);
	while (*head != NULL)
	{
	for (i = 0; i < num; i++)
	{
	if (*head == list[i])
	{
	*head = NULL;
	free(list);
	return (num);
	}
	num++;
	list = _ra(list, num, *head);
	next =(*head)->next;
	free(*head);
	*head = next;
	}
	free(list);
	return (num);





}


}



}
