#include "main.h"

/**
 * _strcat - appends SRC to DEST, remove \0 and adds at the end
 *
 * @dest: varaible 1
 * @src: variable 2
 * Return: dest
 **/

char *_strcat(char *dest, char *src)
{
	int hsrc = 0, dest_len = 0;

	while (dest[hsrc++])
		dest_len++;

	for (hsrc = 0; src[hsrc]; hsrc++)
	dest[dest_len++] = src[hsrc];

	return (dest);
}
