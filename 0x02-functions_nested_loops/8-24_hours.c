#include "main.h"

/**
 * jack_bauer - prints every minute of the day.
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int a, b;

	a = 0;

	while (a < 24)
	{
		b = 0;

		while (b < 60)
		{
			_putchar((a / 10) + 48);
			_putchar((a % 10) + 48);
			_putchar(':');
			_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
			_putchar('\n');
			b++;
		}
		a++;
	}
}
