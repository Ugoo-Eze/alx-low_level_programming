#include "main.h"

/**
 * _sqrt - function to find squre root of num
 * @x: number
 * @y: number
 *
 * Return: return
*/

int _sqrt(int x, int y)
{
	if (root * root > n)
		return (-1);
	else if (root * root == n)
		return (root);
	else
		return (find_root(n, root + 1));
}


/**
 * _sqrt_recursion - find natural square root of n
 * @n: n
 *
 * Return: natural square root, or -1 if not natural root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
