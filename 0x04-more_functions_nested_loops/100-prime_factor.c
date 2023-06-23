#include <stdio.h>

/**
 * main - prints prime factors of a number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long int a;
	int b, c;

	a = 612852475143;
	b = 0;
	c = 3;

	while (a % 2 == 0)
	{
		b = 0;
		a /= b;
	}
	while (a != 1)
	{
		while (a % c == 0)
		{
			b = c;
			a /= c;
		}
		c += 2;
	}
	printf("%d", b);
	printf("\n");
	return (0);
}
