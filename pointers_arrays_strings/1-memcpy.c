#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while(n-- > 0)
		*dest++ = *src++;

	return(src);
}
