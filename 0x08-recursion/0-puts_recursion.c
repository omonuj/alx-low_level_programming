#include "main.h"
/**
 * _puts - recursion function that prints string
 * @s: string to be printed
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
