#include "main.h"
/**
 * get_print_func - selects the correct function to perform the operation.
 * @s: argument indentifier
 * @index: index for argument indentifier
 * Return: pointer to a function.
 */
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int)
{
	print_t pr[] = {
		{"c", print_chr}, {"s", print_str},
		{"b", print_bnr}, {"u", print_unt},
		{"x", print_hex}, {"X", print_upx},
		{"i", print_int}, {"d", print_int},
		{"R", print_rot}, {"o", print_oct},
		{"S", print_usr}, {"p", print_add},
		{"%", print_prg}, {"r", print_rev},
		{"l", print_prg}, {"h", print_prg},
		{"#u", print_unt}, {"+u", print_unt},
		{" u", print_unt}, {"+X", print_upx},
		{" X", print_upx}, {NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (pr[i].f);
}


