#include "main.h"

/**
 *root- calculates the natural square root by checking from number one.
 *@n: number whose natural square root is calculated.
 *@c: counter to test.
 *Return: the natural square root of n or -1 if it doesn't exist.
 */
int root(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}
	else if (c * c > n)
	{
		return (-1);
	}
	else
	{
		return (root(n, c + 1));
	}
}

/**
 *_sqrt_recursion - function that returns the natural square root of a number.
 *@n: number whose natural square root is calculated.
 *Return: natural square root of n or -1 if it fails.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (root(n, 2));
}

