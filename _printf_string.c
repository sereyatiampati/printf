#include "main.h"
/**
 * _printf_string - Function print string.
 * @arguments: Args functions.
 *
 * Return: i
*/
int _printf_string(va_list arguments)
{
	char *char_to_print = va_arg(arguments, char*);
	int i = 0;

	if (char_to_print == NULL)
		char_to_print = "(null)";

	while (*(char_to_print + i))
	{
		_putchar(*(char_to_print + i));
		i++;
	}
	return (i);
}
