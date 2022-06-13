#include "main.h"

/**
 * swap_int - function to swap two values
 *@a: argument value 1
 *@b: argument value 2
*/

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length > 0)
	{
		_putchar(s[--length]);
	}

	_putchar('\n');
}
