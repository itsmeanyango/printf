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

	if (format == NULL)
		return (-1);

	while (*format != '\0')
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
			else
				chars_printed += _putchar('?');
		}
		else
			chars_printed += _putchar(*format);
		format++;
	}

	va_end(args);

	return (chars_printed);
}
