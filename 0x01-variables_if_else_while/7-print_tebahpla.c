#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int n = 122;
while (n > 96)
{
	putchar(n);
	n -= 1;
}
putchar('\n');
return (0);
}
