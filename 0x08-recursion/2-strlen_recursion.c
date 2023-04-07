#include "main.h"
/**
 * _strlen_recursion - returns the lenth of a string
 * @s: string
 * Return: an int that displays the lenth of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (+_strlen_recursion(s + 1));
	return (0);
}
