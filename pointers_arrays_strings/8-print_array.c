#include "main.h"
#include <stdio.h>
/**
 * print_array - print all arry selec
 * @a: array
 * @n: number of array to get print
 */
void print_array(int *a, int n)
{
	int i;

	n = n - 1;

	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
	for (i = 0; i <= n; i++)
	{
		if (i != n)
		{
		printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
	}
}
