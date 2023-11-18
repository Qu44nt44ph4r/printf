#include "main.h"

/**
 * print_nums - should print a decimal integer
 * @i: integer
 *
 * Return: on success 1
 */

int print_nums(int i)
{
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}

	if (i / 10 != 0)
	{
		print_nums(i / 10);
	}

	_putchar(i % 10 + '0');
	return (1);
}
