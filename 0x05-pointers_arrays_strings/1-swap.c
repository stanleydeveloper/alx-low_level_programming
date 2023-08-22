#include "main.h"

/**
 * Swap_int - Swaps the values of two integers
 * @a: integer to Swap
 * @b: integer to Swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
