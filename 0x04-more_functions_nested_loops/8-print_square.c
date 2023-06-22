#include "main.h"

/**
 * print_square - prints a square
 * @size: defines square size
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		if (size <= 0)
			_putchar('\n');
		_putchar('\n');
	}
	_putchar('\n');
}

