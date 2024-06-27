#include "main.h"
/**
 * _strcpy -copie source to dest
 *@dest: destination
 *@src: source
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while(*src)
		*dest++ = *src++;
	*dest = '\0';

	return (temp);	
}
