#include "main.h"

/**
 * swap_int - function to swap two values
 *@a: argument value 1
 *@b: argument value 2
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = (*a);
	(*a) = (*b);
	(*b) = temp;
}
