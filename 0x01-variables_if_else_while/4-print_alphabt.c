#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all lowercase alphabts except e and q.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar('\n');

	return (0);
}
