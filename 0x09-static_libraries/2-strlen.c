#include <stdio.h>
/**
 * _strlen-returns the lenght of a string
 * @str-the string to be measured
 * return:lengh of the string
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
