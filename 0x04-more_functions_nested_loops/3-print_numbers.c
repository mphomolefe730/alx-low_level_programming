#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: Alway 0 (Success)
 **/

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
