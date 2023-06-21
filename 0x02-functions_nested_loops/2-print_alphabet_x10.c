#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char ah;
	int a;

	a = 0;
	while (a < 10)
	{
		ah = 'a';
		while (ah <= 'z')
		{
			_putchar(ah);
			ah++;
		}
		_putchar('\n');
		a++;
	}
}
