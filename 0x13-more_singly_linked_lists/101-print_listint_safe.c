#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_r-memroy realloc
*@list: lsit to be appended
*@size:sizeof(newlist)
*
*Return: ptr to nu lst
*/

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
	free(list);
	exit(98);
	}
	for (i = 0; i < size - 1; i++)
	newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);

}

/**
*print_listint_safe- to print a list
*@head:head of list
*
*Return:n(nodes(list))
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
	for (i = 0; i < num; i++)
	{
	if (head == list[i])
	{
	printf("->[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	free(list);
	return (num);
}
}

}





