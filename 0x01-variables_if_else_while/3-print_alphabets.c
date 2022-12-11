#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 **/

int main(void)
{
	int alphabet = 97;
	int alphabet2 = 65;
	/*print  charactor*/
	while (alphabet <= 122)
	{
		putchar(alphabet);
		alphabet++;
	}

	while (alphabet2 <= 90)
	{
		putchar(alphabet2);
		alphabet++;
	}

	putchar('\n');
	return (0);
}

