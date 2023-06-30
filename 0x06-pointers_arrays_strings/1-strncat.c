#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: most bytes from string 2
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int b;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[len] = src[b];
		len++;
		b++;
	}
	dest[len] = '\0';
	return (dest);
}
