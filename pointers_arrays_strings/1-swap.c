#include "main.h"
/**
 * swap_int -switch a and b
 * @a: number
 * @b: number
 */
void swap_int(int *a, int *b)
{
	int temp = *a;;
	*a = *b;
	*b = temp;
}
