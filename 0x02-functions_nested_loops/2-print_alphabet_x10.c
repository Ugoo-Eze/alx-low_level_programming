#include "main.h"

/**
 * print_alphabet_x10 - print a-z 10x
 *
 * Return: Always 0
 *
*/

void print_alphabet_x10(void)
{
	char num;
	char alph;

	for (num = 0; num <= 9; num++)
	{
		
		alph = 'a';
		while (alph <= 'z')
		{
			_putchar(alph);
		}

		_putchar('\n');
	}
}
