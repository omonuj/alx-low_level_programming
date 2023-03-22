#include "main.h"
/**
 * _islower -> check if the character is lowercase
 * @c: The character to be checked
 *
 * Return: returns 1 and 0 depending on condition
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
		return (0);
}
