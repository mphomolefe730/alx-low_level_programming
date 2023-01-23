#include "main.h"

/**
 * create_array - function that creates an array
 * of chars, and initializes it with a specific char
 * @size: number of characters
 * @c: the character.
 * Return: null if size is 0 ,else a point.
 **/

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
		return (NULL);
