#include "main.h"
/**
 * _puts_recursion - Prints a string recursively followed by a new line.
 * @s: A pointer to the string.
 *
 * Description: This function prints each character of the string pointed
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
