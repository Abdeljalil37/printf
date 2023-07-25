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
		{"c", print_chr}, {"s", print_str},
		{"i", print_int}, {"d", print_int},
		{"b", print_bnr}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex},
		{"X", print_upx}, {"%", print_prg},
		{"S", print_usr}, {"p", print_add},
		{"R", print_rot}, {"r", print_rev},
		{"l", print_prg}, {"h", print_prg},
		{"#u", print_unt}, {"+u", print_unt},
		{" u", print_unt}, {"+X", print_upx},
		{" X", print_upx}, {"li", prinlint},
		{"ld", prinlint}, {"lu", prinlunt},
		{"lx", prinlhex}, {"lX", prinlupx},
		{"lo", prinloct}, {"hu", prinhunt},
		{"hx", prinhhex}, {"hX", prinhupx},
		{"hd", prinhint}, {"hi", prinhint},
		{"ho", prinhoct}, {"#o", prinnoct},
		{"#x", prinnhex}, {"#X", prinnupx},
		{"#d", print_int}, {"#u", print_unt},
		{"#i", print_int}, {"+i", prinpint},
		{"+d", prinpint}, {" +i", prinpint},
		{" +d", prinpint}, {"+ i", prinpint},
		{"+ d", prinpint}, {NULL, NULL},
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
	return (j);
}
