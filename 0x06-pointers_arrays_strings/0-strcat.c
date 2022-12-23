#include "main.h"

/**
 * _strcat - appends SRC to DEST, remove \0 an
 * adds at the end
 *
 * @dest: varaible 1
 * @src: variable 2
 * Return: dest
 **/

char *_strcat(char *dest, char *src)
{
	int len = 0, replc;

	while (dest[len]) /*get the length of dsest*/
	{
		len++;
	}

	for (replc = 0; src[replc] != '\0'; replc++)
	/*add the charactors of SRC to DEST*/
	{
		dest[len] = src[replc];
	}

	dest[len] = '\0'; /*add special character to the end*/
	return (dest);
}

