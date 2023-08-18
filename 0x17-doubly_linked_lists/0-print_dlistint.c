#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count;
	node_count = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	node_count++;
	}

	return (node_count);
}
