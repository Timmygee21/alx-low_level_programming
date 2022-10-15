#include <stdio.h>

/**
 * main - The entry point for the program
 * Return: The exit code
 */

int main(void)
{
	char ch = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		char value = ch + i;

		if (value == 'q' || value == 'e')
			continue;
		putchar(value);
	}

	putchar('\n');

	return (0);
}
