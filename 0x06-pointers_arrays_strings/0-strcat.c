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
	int i;
	char hdest = *dest;
	char hsrc = *src;

	for (i = 0; i <= hsrc; i++)
	{
		dest[hdest + 1] = src[i];
	}
	Return(dest);
}
