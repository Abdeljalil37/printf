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


/**
 * prinlint - prints a long integer
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */

int prinlint(va_list arguments, char *buf, unsigned int ibuf)
{
	long int int_input;
	unsigned long int int_in, int_tmp, len, div, isneg;

	int_input = va_arg(arguments, long int);
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

/**
 * prinsint - prints int begining with space
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */

int prinsint(va_list arguments, char *buf, unsigned int ibuf)
{
	int int_input;
	unsigned int int_in, int_tmp, len, div;

	int_input = va_arg(arguments, int);
	if (int_input < 0)
	{
		int_in = int_input * -1;
		ibuf = handl_buf(buf, '-', ibuf);
	}
	else
	{
		int_in = int_input;
		ibuf = handl_buf(buf, ' ', ibuf);
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
	return (len + 1);
}

/**
 * prinlunt - prints a long unsigned integer
 * @arguments: number to print
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */

int prinlunt(va_list arguments, char *buf, unsigned int ibuf)
{
	unsigned long int int_in, int_tmp, len, div;

	int_in = va_arg(arguments, unsigned long int);
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
	return (len);
}

/**
 * prinhunt - prints a short unsigned integer
 * @arguments: number to print
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */

int prinhunt(va_list arguments, char *buf, unsigned int ibuf)
{
	unsigned short int int_in, int_tmp, len, div;

	int_in = va_arg(arguments, unsigned int);

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
	return (len);
}
