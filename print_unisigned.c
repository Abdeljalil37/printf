#include "main.h"

/**
 * print_unt - prints an unsigned int
 * @arguments: number to print
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */

int print_unt(va_list arguments, char *buf, unsigned int ibuf)
{
	unsigned int int_in, int_tmp, i, div;

	int_in = va_arg(arguments, unsigned int);
	int_tmp = int_in;
	div = 1;
	while (int_tmp > 9)
	{
		div *= 10;
		int_tmp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		ibuf = handl_buf(buf, ((int_in / div) % 10) + '0', ibuf);
	}
	return (i);
}
