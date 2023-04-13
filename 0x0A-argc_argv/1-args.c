#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument array
 * Return: number os argv
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		argv = argv;
		printf("%d\n", argc - 1);
	}
	return (0);
}
