#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
*list_len- display the number of lsit elements
*@h: linked list
*
*Return: the numer of elemnts in a list
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
	h = h->next;
	count++;
	}
	return (count);


}
