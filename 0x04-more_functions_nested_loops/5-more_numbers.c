#include "main.h"

/**
 * print_most_numbers - function to print digit 0-9
 * minus 2 & 4
 *
 * Return: Always 0.
*/

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b);
		}

		_putchar('\n');
	}
}
