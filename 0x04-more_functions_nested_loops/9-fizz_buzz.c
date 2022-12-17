#include <stdio.h>

/**
 * main - print Buss each number of 3 & %
 * Return: Always 0
 **/

int main(void)
{
	int n;

	n = 1;
	printf("%d", n);

	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			print("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
