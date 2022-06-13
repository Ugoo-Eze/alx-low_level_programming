#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print element of array
 *
 * @a: pointer for argument
 * @n: argument
*/

void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n - 1)
		{
			printf("%d, ", a[i++]);
		}
		printf("%d\n", a[i]);
	}
	else
	{
		printf("\n");
	}
}
