#include "main.h"
/**
 * _strpbrk - finds a string for any of the set
 *@s: the string to search
 * @accept: the bytes to search for
 * Return: Null if set is not matched
 * or pointer to the matched byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
