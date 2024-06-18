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
		printf("is positive");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
	else if (n < 0)
	{
		printf("is negative");
	}


	/* your code goes there */
	return (0);
}
