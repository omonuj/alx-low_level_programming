#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: a character to be checked
 * Return: 1, 0, -1, depending on the condition
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
