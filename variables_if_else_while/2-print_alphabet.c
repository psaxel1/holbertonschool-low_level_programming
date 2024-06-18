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
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		write(1, &ch, 1);
	}

	return (0);
}
