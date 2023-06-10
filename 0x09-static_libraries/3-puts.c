#include "main.h"
/**
 *main- the point of entry to the fucntion
 *
 * Return: nada
 */
void _puts(char *str)
{

	int w = 0;
	while (str[w])
	{

	_putchar(str[w]);
	w++;

	}

	_putchar('\n');
}
