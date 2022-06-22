#include "main.h"

/**
 * _print_rev_recursion - function to print string in reverse
 *
 * @s: argument for function
*/

void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
