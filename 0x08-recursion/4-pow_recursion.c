#include "main.h"

/**
 *_pow_recursion- calculates value of x raised to the power y by recursion.
 *@x: the base number.
 *@y: the exponent (power) to which x is raised.
 *Return: value of calculation or -1 if fails.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
