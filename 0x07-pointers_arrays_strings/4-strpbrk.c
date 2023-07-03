#include "main.h"

/**
 * _strpbrk - Locates the first occurrence in a string of any byte
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing bytes to be matched
 *
 * Return: Pointer to the byte in 's' that
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int itr, jtr;
	char *p = NULL;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		for (jtr = 0; accept[jtr] != '\0'; jtr++)
		{
			if (s[itr] == accept[jtr])
			{
				p = &s[itr];
				return (p);
			}
		}
	}

	return (0);
}
