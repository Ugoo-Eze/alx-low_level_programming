#include "main.h"

/**
 * print_alphabet - function to print a-z
 *
 * Return: end program
 *
*/

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}
