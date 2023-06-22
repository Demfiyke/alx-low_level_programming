#include "main.h"

/**
 * more_numbers - prints digits multiplied by 10
 * Return: void
 */
void more_numbers(void)
{
	int a, b;

	a = 0;

	while (a < 10)
	{
		a++;
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar('1');
			_putchar((b % 10) + 48);
		}
		_putchar('\n');
	}
}

