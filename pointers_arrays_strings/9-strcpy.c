#include "main.h"
/**
 * _strcpy -copie source to dest
 *@dest: destination
 *@src: source
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
    return dest;
}
