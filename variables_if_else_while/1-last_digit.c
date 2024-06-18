#include <stdio.h>
#include <stdlib.h>
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
	int n, d;
	d = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, d);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, d);
	}
	else if (n < 6 && !0)
	{
		printf("Last digit of %d id %d and is less than 6 and not 0\n", n, d);
	}
	return (0);
}
