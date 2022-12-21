#include "main.h"

/**
 * swap_int - function that swaps the value of two intergers
 * @a: interger one
 * @b: interger two
 **/

void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
