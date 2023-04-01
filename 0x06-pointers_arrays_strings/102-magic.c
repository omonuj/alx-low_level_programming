#include <stdio.h>
/**
 * main- Entry point
 * Return: return 0
 */
int main(void)
{
	int n;
	int b[5];
	int *p;

	b[2] = 1024;
	p =  &n;
	/**
	 * Remeber - you are not allowed to use a
	 * - you are not allowed to modify p
	 *   - only one statemente
	 */
	*(p + 5) = 98;
	/*...so that this prints 98\n */
	printf("b[2] %d\n", b[2]);
	return (0);
}

