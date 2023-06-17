#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'print alphabet in lowercase'
 *
 * Result: Always 0 (success)
 */
int main(void)
{
	char alpt[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpt[i]);
	}
	putchar('\n');
	return (0);
}
