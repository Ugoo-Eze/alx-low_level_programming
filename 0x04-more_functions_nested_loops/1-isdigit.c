#include "main.h"

/**
 * _isdigit - function to check for 0-9
 * @c: the argument of the _isdigit function.
 *
 * Return: Always 0.
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
