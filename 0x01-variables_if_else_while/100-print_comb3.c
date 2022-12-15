#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	double num0 = 48;
	double num1 = 48;

	for (num1; num1 < 57; num1++)
	{
		if (num1 < 57)
		{
			putchar(num1);
			num1++;
		}
		putchar(num1);
		putchar(44);
		putchar(' ');
	}
	return (0);
}
