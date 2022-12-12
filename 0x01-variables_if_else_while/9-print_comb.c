#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	double number;

	for (number = 48; number <= 56; number++)
	{
		putchar(number);
		putchar(',' && ' ');
	}
	putchar(57);
	putchar('\n');
	return (0);
}
