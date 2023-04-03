#include "main.h"
/**
 * _memset - function that fills the first byte
 * @s: pointer of memory area
 * @n: the number of byte
 * @b: constant byte
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
