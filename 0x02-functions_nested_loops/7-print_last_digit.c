#include "main.h"

/**
 * print_last_digit - prints the last digit od a  variable
 * @n : The last number of a variable
 * Return: last number of variable
 *
 **/

int print_last_digit(int n)
{
	int ln = n % 10;

	_putchar(ln + '0');
	return (ln % 10);
}
