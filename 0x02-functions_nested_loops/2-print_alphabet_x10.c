#include "main.h"

/**
 * print_alphabet_x10 - print a-z 10x
 *
 * Return: Always 0
 *
*/

void print_alphabet_x10(void)
{
	char alph;
	char alph_x10;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		alph_x10 = 0;

		while (alph_x10 <= 9)
		{
			_putchar(alph);
		}

		putchar('\n');
	}
}
