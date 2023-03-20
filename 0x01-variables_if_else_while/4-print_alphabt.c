#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
int lc = 'a';
while (lc <= 'z')
{
if (lc == 'e' || lc == 'q')
{
	lc++;
}
else
{
	putchar(lc);
	lc++;
}
}
putchar('\n');
return (0);
}
