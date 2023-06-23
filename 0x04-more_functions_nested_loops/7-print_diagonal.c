#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: defines the length of the line
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= n; b++)
		{
			if (a > b)
			{
				_putchar(' ');
			} else if (a == b)
			{
				_putchar('\\');
			} else if (n <= 0)
			{
			_putchar('\n');
			}
		}
		_putchar('\n');
	}
}
