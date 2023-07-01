#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>


/**
 *struct list_s- singly linked list
 *@str: the string that we got sizeof
 *@len: str_len
 *@next:points to next node/ cell
 *
 *Description: singly linked lisst of hLBTON PRJT
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;

}list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
