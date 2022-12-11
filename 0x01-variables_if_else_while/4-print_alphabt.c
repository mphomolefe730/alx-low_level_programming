#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 **/

int main(void)
{
	int charactor = 97;

	/* print charactor*/
	while (charactor <= 122)
	{
		 putchar (charactor);
		 charactor =! 133 & 101;
		 charactor++;
	}
	return (0);
}
