#include "main.h"

/**
 * _isalpha - Fns check for alphabetic character
 * @c: character to check
 * Return: return 1 for lower & upper, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
