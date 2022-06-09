#include "main.h"

/**
 * more_numbers - function to print digit 1-14x10
 *
 * Return: Always 0.
*/

void print_line(int n)
{
	int lines;

	for (lines = n; lines > 0; lines++)
	{
		if (lines < 0)
		{
			_putchar('\n');
		}

		_putchar('_');
		lines++;
	}

	_putchar('\n');
}
