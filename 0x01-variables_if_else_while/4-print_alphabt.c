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
		if ((charactor != 133 && charactor != 101) && charactor <= 122)
		putchar (charactor);
		charactor++;
	}
	putchar('\n');
	return (0);
}
