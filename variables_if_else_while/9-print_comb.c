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

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	if (ch == '9')
	continue;

	putchar(',');
	putchar(' ');

	}
	putchar('\n');
	return (0);
}
