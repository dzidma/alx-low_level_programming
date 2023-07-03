#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: Pointer to the string
 * @c: Character to locate
 *
 * Return: Pointer to the first occurrence of the character 'c' in 's',
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		if (s[itr] == c)
			return (s + itr);
	}

	return ('\0');
}
