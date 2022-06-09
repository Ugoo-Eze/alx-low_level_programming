#include "main.h"

/**
 * print_line - function to print straight line
 * @n: number of line to print
 *
 * Return: Always 0.
*/

void print_line(int n)
{
	int lines = n;

	for (lines = n; lines > 0; lines--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
