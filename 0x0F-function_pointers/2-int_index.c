#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: number of elemnts in the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: the index of the first elemnt for which the cmp
 * fucntion does not return 0;
 * if no elemnt matches return -1;
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int (*p)(int);

	p = cmp;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (p(array[i]) && array[i] != 0)
			break;
		if (i == size - 1)
			return (-1);
	}
	return (i);
}
