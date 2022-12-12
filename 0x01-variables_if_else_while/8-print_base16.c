#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int number = 48;
	int charactor = 97;

	while (number <= 57)
	{
		putchar(number);
		number++;
	}

	while (charactor <= 102)
	{
		putchar(charactor);
		charactor++;
	}
	putchar('\n');
	return (0);
}
