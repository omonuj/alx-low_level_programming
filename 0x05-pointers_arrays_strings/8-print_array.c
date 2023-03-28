#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: parameter 1
 * @n: parameter 2
 * Return: 0
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
