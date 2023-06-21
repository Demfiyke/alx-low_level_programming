#include "main.h"

/**
 * _abs - computes absolute value of an integer.
 * @r: the int to be computed.
 * Return: Always 0 (Success)
 */
int _abs(int r)
{
	if (r <= 0)
		return (-r);
	else
		return (r);
}
