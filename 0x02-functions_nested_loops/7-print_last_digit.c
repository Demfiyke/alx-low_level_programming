#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @a: number where last digit is taken
 * Return: last digit
 */
int print_last_digit(int a)
{
	int b;

	if (a < 0)
		a = -a;
	b = a % 10;
	if (b < 0)
		b = -a;
	_putchar(b + '0');

return (b);
}
