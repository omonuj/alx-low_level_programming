#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int n = 48;
int l = 'a';
while (n <= 57)
{
	putchar(n);
	n++;
}
while (l <= 'f')
{
	putchar(l);
	l++;
}
putchar('\n');
return (0);
}
