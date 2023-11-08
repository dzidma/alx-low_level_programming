#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: the string name
 * @f: pointer to printing function
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
