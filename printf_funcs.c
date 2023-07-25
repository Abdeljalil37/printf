#include "main.h"

/**
 * ev_print_func - returns the amount of identifiers.
 * @s: argument indentifier
 * @index: index of argument identifier.
 * Return: amount of identifiers.
 */

int ev_print_func(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_chr}, {"s", print_str},{"i", print_int}, {"d", print_int},
		{"b", print_bnr}, {"u", print_unt},{"o", print_oct}, {"x", print_hex},
		{"X", print_upx}, {"%", print_prg},{"S", print_usr}, {"p", print_add},
		{"R", print_rot}, {"r", print_rev},{"l", print_prg}, {"h", print_prg},
		{"#u", print_unt}, {"+u", print_unt},{" u", print_unt}, {"+X", print_upx},
		{" X", print_upx}, {NULL, NULL},
	};
	int len = 0, count = 0, first_index;

	first_index = index;
	while (pr[len].type_arg)
	{
		if (s[index] == pr[len].type_arg[count])
		{
			if (pr[len].type_arg[count + 1] != '\0')
				index++,count++;
			else
				break;
		}
		else
		{
			count = 0;
			len++;
			index = first_index;
		}
	}
	return (count);
}
