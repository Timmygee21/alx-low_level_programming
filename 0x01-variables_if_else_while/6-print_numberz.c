#include <stdio.h>

/**
 * main - The entry point for the program
 * Return: The exit code
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	putchar('\n');

	return (0);
}
