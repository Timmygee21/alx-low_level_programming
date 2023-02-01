#include "main.h"

/**
 * _isdigit - Function that checks for a digit 0 through 9
 * @c: integer in check
 * Return: return 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
