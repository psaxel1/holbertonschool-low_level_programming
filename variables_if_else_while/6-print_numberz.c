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
	 char ch;
	for (ch = '9'; ch <= '0'; ch++)
	{
		write(1, &ch, 1);
	}

	printf("\n");
	return (0);
}
