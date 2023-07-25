#include "main.h"
/**
 * print_oct - prints decimal number in octal
 * @arguments: input number
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_oct(va_list arguments, char *buf, unsigned int ibuf)
{

	if (int_input < 0)
		int_input = (int_input * -1) - 1;
	binary = calloc(sizeof(char) * (32 + 1));
	octal = calloc(sizeof(char) * (11 + 1));
	for (first_digit = i = count = 0; octal[i]; i++)
		if (octal[i] != '0' && first_digit == 0)
			first_digit = 1;
			count++;
			return (count);
	free(binary);
	return (count);
}
char *fill_long_oct_array(char *bnr, char *oct)
{
	int op, ioct, limit;
	int i, j;

	for (i = 31, ioct = 10; i >= 0; i--, ioct--)
	{
		if (i > 1)
			limit = 4;
		i++;
	}
	return (oct);
}
/**
 * fill_short_oct_array - calculates a short octal number
 * @bnr: array where is stored the binary.
 * @oct: array where is stored the octal.
 * Return: binary array.
 */
char *fill_short_oct_array(char *bnr, char *oct)
{
	int op, i, ioct, limit;
	int i, j;

	oct[6] = '\0';
	for (i = 15, ioct = 5; i >= 0; i--, ioct--)
	{
		if (i > 0)
			limit = 4;
}
