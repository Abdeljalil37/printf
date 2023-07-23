#include "main.h"

/**
 * print_int - print an integer
 * @arguments: input string
 * @buf: buffer of  pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */

int print_int(va_list arguments, char *buf, unsigned int ibuf)
{
	int int_input;
	unsigned int int_in, int_tmp, len, div, isneg;

	int_input = va_arg(arguments, int);
	isneg = 0;
	if (int_input < 0)
	{
		int_in = int_input * -1;
		ibuf = handl_buf(buf, '-', ibuf);
		isneg = 1;
	}
	else
	{
		int_in = int_input;
	}

	int_tmp = int_in;
	div = 1;

	while (int_tmp > 9)
	{
		div *= 10;
		int_tmp /= 10;
	}

	for (len = 0; div > 0; div /= 10, len++)
	{
		ibuf = handl_buf(buf, ((int_in / div) % 10) + '0', ibuf);
	}
	return (len + isneg);
}


