#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 * Return: always o (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* If the number is creater than 0: is positie */
	/* If the number is 0:is zero */
	/* If the number is less than 0: is negative */
	return (0);
}
