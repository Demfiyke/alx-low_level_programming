#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: string to be copied
 * @src: copied string
 * @n: most bytes in string
 * Return: pointer to result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
