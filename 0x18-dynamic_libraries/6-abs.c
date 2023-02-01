#include "main.h"

/**
 * _abs - Function that prints absolute value of an integer
 * @n: integer argument
 * Return: return 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
