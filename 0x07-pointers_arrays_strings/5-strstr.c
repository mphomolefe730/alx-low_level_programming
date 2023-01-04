#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: The string its looking in
 * @needle: The string to find
 *
 * Return: returna  point to the string or null if not found
 **/

char *_strstr(char *haystack, char *needle)
{
	char *index_1 = haystack;
	char *index_2 = needle;

	for (; *haystack != '\0'; haystack++)
	{
		while (*index_1 == *index_2 && *index_2 != '\0')
		{
			index_1++;
			index_2++;
		}
		if (*index_2 == '\0')
			return (haystack);
	}
	return (0);
}
