#include <stdio.h>
/**
 * _strchr - locates a c character in a string
 *
 * @: string to find
 * @c: the char we are lookingfor
 *
 * return: c
 * @s. Return NULL if the character isn't found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
