#include <unistd.h>

/**
 * _putchar - function that writes the character c to stdout
 * @c: the char to print
 *
 * Return: on success 1
 * On error, -1 and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
