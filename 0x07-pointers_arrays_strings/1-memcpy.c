#include "main.h"
/**
 * _memcpy - copies memory area
 *
 * @src: the memory sphere to copy from
 * @n: the number of bytes
 * @dest: where to copy memory to
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
