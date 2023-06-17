#include <stdio.h>

/**
 * main - Print alphabets in reverse.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char rv;

	for (rv = 'z'; rv >= 'a'; rv--)
	{
		putchar(rv);
	}
	putchar('\n');
	return (0);
}
