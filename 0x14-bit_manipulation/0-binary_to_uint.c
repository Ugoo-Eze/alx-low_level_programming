#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number
*/

void print_binary(unsigned long int n)
{
	int binary;

	while (binary >= 0)
	{
		if ((n >> binary) & 1)
			_putchar('1');
		else
			_putchar('0');

		binary--;
	}
}
