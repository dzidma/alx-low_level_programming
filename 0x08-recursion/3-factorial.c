#include "main.h"

/**
 * factorial: function returns the factorial of a given number by recursion.
 * @n: number that its factorial should be calculated.
 * Return: either factorial value or -1 if failed.
*/

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
