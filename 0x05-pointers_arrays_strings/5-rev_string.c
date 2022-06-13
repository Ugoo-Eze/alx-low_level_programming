#include "main.h"

/**
 * rev_string - function to reverse string
 *
 * @s: pointer for argument
*/

void rev_string(char *s)
{
	char temp;
	int length = 0;
	int x = 0;
	int y;

	while (s[length] != '\0')
	{
		length++;
	}

	y = length - 1;
	length /= 2;

	while (length--)
	{
		temp = s[x];
		s[x] = s[y];
		s[y] = temp;
		x++;
		y--;
	}
}
