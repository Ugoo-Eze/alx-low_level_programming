#include <stdio.h>

/**
 * main - program starting point
 *
 * Return: end program
 *
*/

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		print("%d", number);
	}

	print("\n");
	return (0);
}
