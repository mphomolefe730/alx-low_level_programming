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
	int len = 0;

	while (dest[len])
	{
		len++;
	}

	int replc;
	
	for (replc = 0; scr[replc] != '\0'; replc++)
	{
		dest[len] = src [replc];
	}
	return (dest);
}

