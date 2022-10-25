#include "main.h"
#include <stdio.h>
/**
 * print_array - prints out the second half of a string
 * @a: pointer to an array of integers
 * @n: size of the array
 * Return: no return
 */

void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
