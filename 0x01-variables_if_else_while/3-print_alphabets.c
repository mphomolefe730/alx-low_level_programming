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
	while (alphabet2 <= 90 && alphabet <= 122)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}

