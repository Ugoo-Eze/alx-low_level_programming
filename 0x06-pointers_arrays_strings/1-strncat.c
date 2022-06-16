#include "main.h"
/**
 * _strncat - concatenates n bytes from a string to another
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y;

	while (dest[x] != 0)
	{
		x++;
	}

	for (y = 0; y < n && src[y] != 0; y++)
	{
		dest[x] = src[y];
		x++;
	}

	if (y < n)
	{
		dest[x] = 0;
	}

	return (dest);
}
