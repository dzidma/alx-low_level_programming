#include <unistid.h>

/**
 * main - Entery point
 *
 * Description: C program that prints
 *
 * Return: 1 (not Success)
*/
int main(void)
{	char sent = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, sent, 59);
	return(1);
}	
