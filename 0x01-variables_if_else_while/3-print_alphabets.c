#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: prints lower then upper case
 * Return: 0
 */
int main(void)
{
int lc = 'a';
int uc = 'A';
while (lc <= 'z')
{
	putchar(lc);
		lc++;
}
while (uc <= 'Z')
{
	putchar(uc);
	uc++;
}
putchar('\n');
return (0);
}
