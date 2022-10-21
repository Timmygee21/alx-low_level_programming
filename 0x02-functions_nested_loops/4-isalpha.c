#include "main.h"
/**
 * _isalpha - Check if character is a alphabet character.
 * @c: type int character
 * Return: 1 if letter, lowercase of uppercase, and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);

	else
		return (0);
}
