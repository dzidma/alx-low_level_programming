#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of two digits
 *              using the putchar function.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i, a;

	for (i = 0; i <= 9; i++)
	{
		for (a = i + 1; a < 10; a++)
		{
			putchar('0' + i);
			putchar('0' + a);
			if (i == 8 && a == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

