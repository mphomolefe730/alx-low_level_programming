#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int number = 48;

	while (number <= 56)
	{
		putchar(number);
		putchar(',\t');
		number++;
	}

	putchar (57);
	putchar('\n');
	return (0);
}
