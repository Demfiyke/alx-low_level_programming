#include "main.h"

/**
 * _strlen - returns the length of the string
 * @*s: string with unidentified length
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
