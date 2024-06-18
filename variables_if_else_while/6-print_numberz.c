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
	 int ch;
	for (ch = '9'; ch <= '0'; ch++)
	{
		putchar(1, &ch, 1);
	}

	putchar("\n");
	return (0);
}
