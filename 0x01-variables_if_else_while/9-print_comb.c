#include <stdio.h>

/**
 * main - The entry point for the program
 * Return: The exit code
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i)

	if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	
	}
	putchar('\n');

	return (0);
}
