#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings.
 * @dest: the destination string
 * @src: the source string
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, lDest, lSrc;

	lDest = strlen(dest);
	lSrc = strlen(src);

	for (i = 0; i < lSrc; i++)
	{
		dest[lDest + i] = src[i];
	}
	dest[lDest + i] = '\0';
	return (dest);
}
