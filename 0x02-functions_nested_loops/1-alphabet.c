#include "main.h"

/**
 * print_alphabet - print small letters
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ah;

	ah = 'a';
	while (ah <= 'z')
	{
		_putchar(ah);
		ah++;
	}
	_putchar('\n');
}
