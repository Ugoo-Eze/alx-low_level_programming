#include "main.h"

/**
 * print line - function to print straight line
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
