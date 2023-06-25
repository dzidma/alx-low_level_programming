#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of three digits
 *              using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundreds_digit;
	int tens_digit;
	int ones_digit;

	for (hundreds_digit = 0; hundreds_digit < 8; hundreds_digit++)
	{
		for (tens_digit = hundreds_digit + 1; tens_digit < 9; tens_digit++)
		{
			for (ones_digit = tens_digit + 1; ones_digit <= 9; ones_digit++)
			{
				putchar(hundreds_digit + '0');	/* Print the hundreds digit */
				putchar(tens_digit + '0');		/* Print the tens digit */
				putchar(ones_digit + '0');		/* Print the ones digit */

				if (hundreds_digit != 7 || tens_digit != 8 || ones_digit != 9)
				{
					putchar(',');	/* Print the comma */
					putchar(' ');	/* Print the space */
				}
			}
		}
	}

	putchar('\n');	/* Print a new line */

	return (0);
}
