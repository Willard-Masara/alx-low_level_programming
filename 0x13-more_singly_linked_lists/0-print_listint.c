
#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
*print_listint-to print all data of listint list
*@h:head of list_t list.
*
*Return: n(nodes(list_t)
*/
size_t print_listint(const listint_t *h)

{
	size_t cells = 0;

	while (h)
	{
	cells++;
	printf("%d\n", h->n);
	h = h->next;


	}
	return (cells);

}
