#include "main.h"

/**
 * main - print Buss each number of 3 & %
 * Return: Always 0
 **/

int main(void)
{
	int n;

	n = 1;
	_putchar(n);

	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			_putchar("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			_putchar(Fizz );
		}
		else if (n % 5 == 0)
		{
			_putchar(Buzz);
		}
		else
		{
			_putchar(n);
		}
	}
	_putchar('\n');
	return (0);
}
