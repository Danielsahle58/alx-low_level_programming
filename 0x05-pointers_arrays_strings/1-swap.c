#include <stdio.h"i>

/**
 *swap_int - swaps the values of two intrgers.
 *@a: the first integer to be swapped
 *@b: thr second integer it ti be swapped
 *
 *Return:  nothing
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}

