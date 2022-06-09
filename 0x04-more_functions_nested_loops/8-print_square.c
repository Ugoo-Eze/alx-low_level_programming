#include "main.h"

/**
 * print_line - function to print straight line
 * @n: number of line to print
 *
 * Return: Always 0.
*/

void print_square(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 1; column <= size; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
