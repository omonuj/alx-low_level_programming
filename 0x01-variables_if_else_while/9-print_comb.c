#include <stdio.h>
/**
 * main- Entry point
 * Return: 0
 */
int main(void)
{
int n = 48;
int c = 44;
while (n <= 57)
{
	putchar(n);
if (n != 57)
{
	putchar(c);
	putchar(32);
}
n++;
}
putchar('\n');
return (0);
}
