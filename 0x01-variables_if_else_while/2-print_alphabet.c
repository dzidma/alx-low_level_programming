#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet followed by a newline.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	for (int i = 97; i < 123; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
