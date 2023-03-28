#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: parameter
 * Return: int
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '_')
			signm *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) = (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sigh);
}
