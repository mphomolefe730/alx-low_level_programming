#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int alphabet = 97;

	for(alphabet; alphabet <= 122; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
