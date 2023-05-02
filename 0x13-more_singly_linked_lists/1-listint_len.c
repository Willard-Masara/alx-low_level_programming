#include "lists.h"
#include <stdio.h>

/**
*listint_len-to return no of elemmnts
*@h:head of listiint_t
*
*Return:no of elemts in list
*/
size_t listint_len(const listint_t *h)
{
	size_t cells = 0;

	while (h)
	{

	cells++;
	h = h->next;
	}

	return (cells);
}
