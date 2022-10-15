#include <stdio.h>

/**
 * main - The entry point for the program
 * Return: The exit code
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
		putchar('z' - i);
	putchar('\n');

	return (0);
}
