#include <stdio.h>

/**
 * fizzBuzz - Prints FizzBuzz numbers from 1 to 100
 */
void fizzBuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}

	printf("\n");
}

/**
 * main - Entry point
 *
 * Description: Calls the fizzBuzz function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fizzBuzz();
	return (0);
}
