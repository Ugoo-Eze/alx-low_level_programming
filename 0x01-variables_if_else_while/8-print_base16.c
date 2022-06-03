#include <stdio.h>

/**
 * main - program starting point
 *
 * Return: end program
 *
*/

int main(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
	}

	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}

	putchar('\n');
	return (0);
}
