#include <stdio.h>

/**
 * main - program starting point
 *
 * Return: end program
 *
*/

int main(void)
{
	char alph_rev;

	for (alph_rev = 'z'; alph_rev >= 'a'; alph_rev--)
	{
		putchar(alph_rev);
	}

	putchar('\n');
	return (0);
}
