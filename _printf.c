#include <stdio.h>
#include <stdarg.h>
#include "main.h"


int _printf(const char *format, ...)
{
        int len = 0;
        va_list args;

        va_ start(args, format);

        while (format[i] != '\0')
        {
                if (*format == '%')
                        format++;

                switch (*format)
                {
                    case 'c':
                                _putchar((char)va_args (args, int));
                                count++;
                                break;
                        case 's':
                                {
                                        const char *str = va_arg(args, const char *);

                                        while (*str != '\0')
                                        {
                                                _putchar(*str);
                                                count++;
                                                break;
                                        }
                                }
                                break;
                        case '%':
                                _putcahr('%');
                                count++;
                                break;
                        default:
                                break;

                }
                else
                {
                        putchar(*format);
                        count++;
                }
                format++;
        }
        va_end(args);
        return (count);
}
