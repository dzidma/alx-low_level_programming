#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar, followed by a new line using header.
 *
 * Return: Always 0 (success)
*/

int main(void)
{	
	int i;
	char recenica[] = "_putchar";
	
	for (i = 0; i < 8; i++)
	{
		_putchar(recenica[i]);
		_putchar('\n');
	}

	return (0);
}
