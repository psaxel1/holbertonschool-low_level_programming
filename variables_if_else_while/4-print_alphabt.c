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
	for (ch = 'a'; ch <= 'd'; ch++)
	{
		write(1, &ch, 1);
	}

	for (CH = 'f'; CH <= 'p'; CH++)
	{
	write(1, &CH, 1);
	}

	for (CH = 'r'; CH <= 'z'; CH++)
	{
	write(1, &CH, 1);
	}
	printf("\n");
	return (0);
}
