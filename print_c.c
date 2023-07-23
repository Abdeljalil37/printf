#include "main.h"

/**
 * print_c - display a character with putchar.
 * @pa: format of character.
 * @format: format
 * Return: number character for printf.
 */
int print_c(char *format, va_list pa)
{
	(void)format;
	_putchar(va_arg(pa, int));
	return (1);
}
