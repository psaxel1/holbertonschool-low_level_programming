#include "main.h"
/**
 * _strchr -search char in array
 * @s: array
 * @c: char we find
 * Return: array of char we find or 0
 */
char *_strchr(char *s, char c)
{
	while (*++s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
	}
	return (0);

}
