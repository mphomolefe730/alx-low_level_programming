#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*more hears goes there */

/* betty style doc for funstion man goes here */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int last;
	last = n % 10; 

	if(n > 5)
	{
		printf("Last digit of %d is %d and greater than 5", n, last);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
	}

}
