#include "main.h"
/**
 * _memset -fuction write in array to n
 * @s: source arary and dest
 * @b: char wirite in array
 * @n: number go to
 * Return: new s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n-- > 0)
	*s++ = b;

	return (s);
}
