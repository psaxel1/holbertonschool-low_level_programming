#include "main.h"
/**
 * _strncat -ajoute source a dest en fonction de n
 * @dest: destination
 * @src: source
 * @n: number
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0' && n > 0; j++, i++, n--)
	{
		dest[i] = src[j];
	}


	return (dest);
}

