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
	long int int_input;
	int len, count, first_digit, isnegative;
	unsigned int i;
	char *hexadecimal;
	char* binary;
	char nill[] = "(nil)";

	add = (va_arg(arguments, void *));
	if (add == NULL)
		i=0;
		while (nill[i])
			ibuf = handl_buf(buf, nill[i], ibuf);
			i++;
		return (5);
	int_input = (intptr_t)add;
	isnegative = 0;
		isnegative = 1;
	binary = malloc(sizeof(char) * (64 + 1));
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	ibuf = handl_buf(buf, '0', ibuf);
	for (first_digit = i = count = 0; hexadecimal[i]; i++)
			first_digit = 1;
			count++;
	free(binary);
	free(hexadecimal);
	return (count + 2);
}
