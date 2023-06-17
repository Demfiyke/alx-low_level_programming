#include <stdio.h>

/**
 *  main - print alphabet in lowercase
 *  Result: Always 0 (success)
 */
int main(void)
{
	int i;
	char alpt[27] = "abcdefghijklmnopqrstuvwxyz";
	
	for (i = 0; i < 26; i++)
	{
		putchar(alpt[i]);
	}
	putchar('\n');
	return (0);
}
	
