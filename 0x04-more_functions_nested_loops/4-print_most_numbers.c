#include "main.h"

/**
 * _isupper - function to check uppercase character.
 * @c: the argument of the _islower function.
 *
 * Return: Always 0.
*/

void print_most_numbers(void)
{
	char n = '0';

	while (n < 10)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}

		n++
	}
	_putchar('\n');
}
