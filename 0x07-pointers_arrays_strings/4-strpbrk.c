#include "main.h"

/**
 * _strpbrk - Locates the first occurrence in a string of any byte
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing bytes to be matched
 *
 * Return: Pointer to byte in 's' that matches one of the bytes in 'accept',
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int itr, jtr;
	char *p;

	itr = 0;
	while (s[itr] != '\0')
	{
		jtr = 0;

		while (accept[jtr] != '\0')
		{
			if (s[itr] == accept[jtr])
			{
				p = &s[itr];
				return (p);
			}
			jtr++;
		}

		itr++;
	}

	return (0);
}
