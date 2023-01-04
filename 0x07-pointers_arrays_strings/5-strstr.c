#include "main.h"
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0 (success)
 **/

int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	*t = *_strpbrk(s, f);
	_putchar(*t);
	_putchar('\n');
	return (0);
}
