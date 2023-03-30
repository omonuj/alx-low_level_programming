#include "main.h"

/**
 * _strncpy - function that  copiesa string
 *
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i != n)
		dest[i++] = '\0';
	return (dest);
}
