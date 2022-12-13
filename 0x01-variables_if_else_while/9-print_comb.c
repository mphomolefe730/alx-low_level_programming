#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	double number;
	int space = '\n';

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
		if (number <57)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
