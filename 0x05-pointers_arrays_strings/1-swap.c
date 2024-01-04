#include "main.h"

/**
  * swap_int - swaps the value of two pointer integers
  * @a: pointer integer
  * @b: Second pointer
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
