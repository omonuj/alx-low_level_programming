#include "main.h"
#include <string.h>
/**
 * _strchr - locates char c character in a string
 * @: string to find
 * @c: the char we are looking for
 * return: c
 * @s. Return NULL if the character isn't found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] ==  c)
			return (&s[i]);
	}
	return (NULL);
}
