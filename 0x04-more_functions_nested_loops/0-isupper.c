#include "main.h"

/**
 * _isupper - prints uppercase letters.
 * @c: checked if uppercase
 * Return: 1 if uppercase, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
