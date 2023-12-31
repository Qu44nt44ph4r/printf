#include "main.h"

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			switch (format[i + 1])
			{
				case 'c':
					count += _putchar(va_arg(arg_list, int));
					break;
				case 's':
					count += new_puts(va_arg(arg_list, char *));
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				case 'd':
				case 'i':
					count += print_nums(va_arg(arg_list, int));
					break;
				default:
					_putchar('%');
					_putchar(format[i + 1]);
					count += 2;
					break;
			}
			i += 2;
		}
		else
		{
			count += _putchar(format[i]);
			i++;
		}
	}
	va_end(arg_list);
	return (count);
}
