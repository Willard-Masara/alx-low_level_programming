#include <unistd.h>
/**
 *_putchar-this will write o standard output
 *@c: this is the character to be printed
*
* *Return: either 1 or 0
*/
int _putchar (char c)
{
	return (write(1, &c, 1));


}
