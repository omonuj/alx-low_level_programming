#include <stdio.h>

void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - executes before main()
 *
 * Return: no return
 */
void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
