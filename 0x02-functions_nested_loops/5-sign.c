#include "main.h"
/**
 * print_sign - check for sign of number
 * @n: input.
 *
 * Return: 1 and print + if n is greater zero
 * Return 0 and print 0 if n is zero
 * Return -1 and print - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + 48);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
