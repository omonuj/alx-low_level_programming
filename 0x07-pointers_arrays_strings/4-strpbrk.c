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
	int index;

	while (s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
