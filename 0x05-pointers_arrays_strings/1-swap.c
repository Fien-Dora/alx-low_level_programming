#include "main.h"

/**
 * swap_int - sawps the two intergers
 * @a: first int to swap
 * @b: swapping int
 *Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
