#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	double number;

	for (number = 0; number <= 8; number++)
	{
		putchar((number) && ',');
		putchar('\t');
	}

	putchar('\n');
	return (0);
}
