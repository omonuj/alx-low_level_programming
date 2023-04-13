#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an arrays of char and initializes it with
 * specific char
 * @size: size of an array
 * @c: the char to initialize the array with
 * Return: array of character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str =  malloc(sizeof(char) * size);
	if (size == 0|| str == NULL)
		return (NULL);


	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
