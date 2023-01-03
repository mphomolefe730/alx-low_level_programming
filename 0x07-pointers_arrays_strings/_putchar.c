#include <unistd.h>

/**
 * _putchar - writes the characer c to stdout
 * @c: The character to print
 *
 * Return: On suess 1.
 * On error, -1 is returned and errno is set appropriatelt.
 **/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
