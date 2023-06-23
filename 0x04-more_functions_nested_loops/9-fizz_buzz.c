#include <stdio.h>

/**
 * main - print from 1 - 100
 * print fizz for multiple of 3
 * print buzz for multiples of 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf("Fizz ");
		} else if (a % 3 != 0 && a % 5 == 0)
		{
			printf("Buzz ");
		} else if ((a % 3) == 0 && (a % 5) == 0)
		{
			printf("FizzBuzz ");
		} else
		{
			printf("%d ", a);
		}
	}
	printf("\n");

	return (0);
}
