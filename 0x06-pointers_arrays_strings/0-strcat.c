#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int b;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (b = 0; src[b] != '\0'; b++, len++)
	{
		dest[len] = src[b];
	}
	dest[len] = '\0';
	return (dest);
}
