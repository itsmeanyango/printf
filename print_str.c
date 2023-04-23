#include "main.h"

/**
 * print_string - prints a null-terminaed string to stdout
 *
 * @s: The string
 *
 * Return: The number of character printed
 */
int print_string(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		i++;
	}
	return (i);
}
