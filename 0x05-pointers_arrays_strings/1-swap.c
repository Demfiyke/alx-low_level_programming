#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @*a: pointer to integer a
 * @*b: pointer to integer b
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
