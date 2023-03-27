#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: parameter
 * Return: 0
 */
void print_rev(char *s)
{
	int i =  0, index = 0;

	while (s[index++])
		i++;

	for (index = i - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
