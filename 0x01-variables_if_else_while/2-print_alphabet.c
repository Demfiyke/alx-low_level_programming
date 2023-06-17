#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpt[27] = "abcdefghijklmnopqrstuvwxyz";
	int c;

	for (c = 0; c < 26; c++)
	{
		putchar(alpt[c]);
	}
	putchar('\n');
	return (0);
}
