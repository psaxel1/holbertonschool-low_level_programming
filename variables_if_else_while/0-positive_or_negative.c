#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 *main -Entry point
 *
 * Description: 'this is the description
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf(n, "%d is positive\n");
	}
	else if (n == 0)
	{
		printf(n, "%d is zero\n");
	}
	else if (n < 0)
	{
		printf(n, "%d is negative\n");
	}


	/* your code goes there */
	return (0);
}
