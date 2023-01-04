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
	int index_1;
	int index_2;

	/*add to loop and which moves to next variable*/
	for (index_1 = 0; index_1 < strlen(haystack); index_1++)
	{
		for (index_2 = 0; index_2 < strlen(needle); index_2++)
		{
			/*if haystack [0 + n]  is not equal to needle[*], break and add to loop*/
			if (haystack[index_1 + index_2] != needle[index_2])
				break;
			/*if the variable are the same, return the address of haystack*/
			if (haystack[index_1 + index_2] == needle[index_2])
				return (&haystack[index_1]);
			/*if none of the variables match, return NULL*/
			if (index_2 == strlen(needle))
			{
				return (0);
			}
		}
	}
}
