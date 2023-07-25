#include "main.h"

/**
 * print_add - prints the address of an input variable
 * @arguments: input address.
 * @buf: buffer pointer.
 * @ibuf: index for buffer pointer
 *
 * Return: number of chars printed.
 */


int print_add(va_list arguments, char *buf, unsigned int ibuf)
{
	void *add;
	unsigned int i;
	char* binary;
	add = (va_arg(arguments, void *));
	if (add == NULL)
	{
		i=0;
		while (nill[i])
			ibuf = handl_buf(buf, nill[i], ibuf);
			i++;
		return (5);
	}
	int_input = (intptr_t)add;
	free(binary);
	free(hexadecimal);
	return (count + 2);
}
