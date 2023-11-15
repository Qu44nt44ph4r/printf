#include "main.h"

/**
 * new_puts - should print a string 
 * @c: string
 *
 * Return: on success 1
 */

int new_puts(char *c)
{
	int count = 0;
	if (c)
	{
		for (count = 0; c[count] != '\0', count++)
		{
			_putchar(c[count]);
		}
	}
	return (count);
}
