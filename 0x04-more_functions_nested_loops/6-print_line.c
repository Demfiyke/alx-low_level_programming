#include "main.h"

/**
 * print_line - prints a straight line
 * @n: defines the number of line characters
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}
