#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int number = 122;

	while (number >= 97)
	{
		putchar(number);
		number--;
	}
	putchar('\n');
	return (0);
}
