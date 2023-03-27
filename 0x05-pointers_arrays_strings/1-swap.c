#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: parameter 1
 * @b: parameter 2
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
