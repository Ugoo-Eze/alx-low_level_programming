#include <stdio.h>

/**
 * main - program starting point
 *
 * Return: end program
 *
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
