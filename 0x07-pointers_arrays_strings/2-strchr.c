#include <stdio.h>
/**
 * _strchr - locates a c character in a string
 *
 * @: string to find
 * @c: the char we are lookingfor
 *
 * return: c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
