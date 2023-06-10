#include "main.h"
/**
 * _atoi- to convert st to int
 * @str: the syr
 * 
 * Return: int
 */
int _atoi(char *s)
{
	int sig = 1, w  = 0;
	unsigned int back_up = 0;
	while (!(s[w] <= '9' && s[w] >= '0') && s[w] != '\0')
	{

	if (s[w] == '-')
	sig *= -1;
	w++;


	}

	while (s[w] <= '9' && (s[w] >= '0' && s[w] != '\0'))
	{
	back_up = (back_up * 10) + (s[w] - '0');
	w++;


	}
	back_up *= sig;
	return (back_up);




}
