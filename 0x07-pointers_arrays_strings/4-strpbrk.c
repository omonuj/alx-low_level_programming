#include "main.h"
#include <stdlib>
/**
 * _strpbrk - finds a string for any of the set bytes
 * @s: the string to search
 * @accept: the bytes to search for
 * Return: a pointer to the byte in 
 * @accept, or 	NULL if no such byte is found.
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
