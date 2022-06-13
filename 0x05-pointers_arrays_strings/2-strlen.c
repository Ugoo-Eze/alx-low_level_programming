#include "main.h"

/**
 *_strlen - function to return length of string
 *@s: argument for string input
 *
 * Return: return length of string
*/

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
