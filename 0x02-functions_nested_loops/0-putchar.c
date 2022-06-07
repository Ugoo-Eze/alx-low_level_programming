#include "main.h"

/**
 * main - program to print '_putchar'
 *
 * Return: end program
 *
*/

int main(void)
{
	char word[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	unsigned int c;

	for (c = 0; c < sizeof(word); c++)
	{
		_putchar(word[c]);
	}

	_putchar('\n');
	return (0);
}