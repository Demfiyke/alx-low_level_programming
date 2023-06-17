#include <stdio.h>

/**
 * main - Prints the akphabet in lowercase and then in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpt[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int c;

	for (c = 0; c < 52; c++)
	{
		putchar(alpt[c]);
	}
	putchar('\n');
	return (0);
}
