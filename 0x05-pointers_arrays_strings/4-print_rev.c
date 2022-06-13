#include "main.h"

/**
 *print_rev - function to print string in reverse
 *@s: pointer for function argument
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
