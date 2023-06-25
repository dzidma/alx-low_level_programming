#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers
 *		using putchar  function.
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
