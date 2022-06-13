#include "main.h"

/**
 * puts_half - function to print half of string
 *
 * @str: pointer for argument
*/

void puts_half(char *str)
{
	int length = 0;
	int half;

	while (str[length] != '\0')
	{
		length++;
	}

	half = (length % 2 == 0) ? length / 2 : (length + 1) / 2;

	while (str[half] != '\0')
	{
		_putchar(str[half++]);
	}

	_putchar('\0');
}
