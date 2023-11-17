#include "main.h"

/**
 * print_d - should print a decimal integer
 * @d: decimal integer
 *
 * Return: on success 1
 */

int print_d(int d)
{
	if (d < 0)
	{
		_putchar('-');
		d = -d;
	}

	if (d / 10 != 0)
	{
		print_d(d / 10);
	}

	_putchar(d % 10 + '0');
	return (1);
}
