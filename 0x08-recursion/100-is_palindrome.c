#include "main.h"
/**
*_strlen_recursion- returns the length of a str
*@s: string
*Return: strlen
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));

}
/**
*comparator- compares str chars
*@s: str
*@n1: small iterator
*@n2: iterator
*Return: a dot
*/
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
{

	if (n1 == n2 || n1 == n2 + 1)
	return (1);
	return (0 + comparator(s, n1 + 1, n2 - 1));
}
	return (0);
}
/**
*is_palindrome- determines if  str is palindrome
*@s; str
*Return: either 1 or 0
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
	return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));

}
