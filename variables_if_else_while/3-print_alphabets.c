#include <stdio.h>
#include <unistd.h>

/**
 *main -Entry point
 *
 *
 *
 *
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	 char ch, CH;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		write(1, &ch, 1);
	}

	for (CH = 'A'; CH <= 'Z'; CH++)
	{
	write(1, &CH, 1);
	}
	printf("\n");
	return (0);
}
