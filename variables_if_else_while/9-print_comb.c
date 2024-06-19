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
	for (ch = '0'; ch <= '8'; ch++)
	{
	putchar(ch);
	putchar(',');
	putchar(' ');
	}

	putchar('9');
	return (0);
}
