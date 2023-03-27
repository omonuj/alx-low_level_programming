#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: parameter
 * Return: Always o.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
