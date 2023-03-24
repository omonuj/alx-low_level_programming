#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase letters
 * @c: char checks
 * Return: always 0.
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
