#include "main.h"

/**
 * _strncat - Conatenates two strings
 * @dest: parameter 1
 * @src: parameter 2
 * @n: paramater 3
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	unsigned int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		if (j < n)
		{
			*(dest + i) = *(src + j);
			i++;
		}
		j++;
	}
	return (dest);
}
