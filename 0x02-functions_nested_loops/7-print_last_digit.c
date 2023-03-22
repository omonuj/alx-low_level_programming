#include "main.h"
/**
 * print_last_digit -> prints the last digit of a number
 * @n: parameter
 * Return: last digit
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}

