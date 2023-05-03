#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
*is_palindrome- checs for palindrome
*@s: str to reverse
*
*Return: 0 or 1
*/
int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));

}
/**
*_strlen_recursion-to return strlen
*@s: strlen
*
*Return: strlen
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
*check_pal-checks for palindrome
*@s: str to be checked
*@i: iterator
*@len: strlen
*
*Return: 0 or 1
*/
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	return (0);
	if (i >= len)
	return (1);
	return (check_pal(s, i + 1, len - 1));


}
