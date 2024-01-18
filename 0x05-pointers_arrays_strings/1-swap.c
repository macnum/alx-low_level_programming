#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: poin1ter to first value
 * @b: pointer to second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
