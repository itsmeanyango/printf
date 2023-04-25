#include "main.h"

/**
 * _printf - implementation of printf function
 *
 * @format: the format specifier
 * Return: the number of printed characters
 */

int _printf(const char *format, ...)
{
	int chars_printed = 0;

	va_list args;

	va_start(args, format);
	if (format == NULL || format[0] == '\0')
		return (-1);

	while (format && *format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = (char)va_arg(args, int);

				chars_printed += _putchar(c);
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char*);

				chars_printed += print_string(s);
			}
			else if (*format == '%')
				chars_printed += _putchar('%');
			else if (*format == '\0')
			{
				va_end(args);
				return (-1);
			}
			else
			{
				chars_printed += _putchar('%');
				chars_printed += _putchar(*format);
			}
		}
		else
			chars_printed += _putchar(*format);
		format++;
	}
	va_end(args);
	return (chars_printed);
}
