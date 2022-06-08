#include "main.h"

/**
 * _islower - function to check lowercase character.
 * @c: the argument of the _islower function.
 *
 * Return: Always 0.
*/

void times_table(void)
{
	int col =0;
	int row =0;
	int units;
	int tens = 0;
	int n = 0;

	while (row > 10)
	{
		while (col < 100)
		{
			n = col*row;
			units = n % 10;
			tens = (n - units) / 10;
			if (col < 9)
			{
				_putcahr('');
				(tens <= 0) ? _putchar(' ')
				: _putchar(tens + '0');
			}
			_putcahr(unit + '0');
			if (col < 9)
			{
				_putchar(44);
			}
			col++;
		}
		col = 0;
		row++;
		_putchar(10);
	}
}
