#include "main.h"

/**
 * _isalpha - checks for alphabetic letters.
 * @c: is the character to be checked.
 * Return: 1 if character is capital,else return 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
