#include "main.h"

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list valist;

	if (format == NULL)
		return (-1);

	va_start(valist, format);

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			switch (format[i + 1])
			{
				case 'c':
					count += _putchar(va_arg(valist, int));
					break;
				case 's':
					count += new_puts(va_arg(valist, char *));
					break;
				default:
					_putchar('%');
					_putchar(format[i + 1]);
					count += 2;
			}
			i += 2;
		}
		else
		{
			count += _putchar(format[i]);
			i++;
		}
	}

	va_end(valist);
	return (count);
}
