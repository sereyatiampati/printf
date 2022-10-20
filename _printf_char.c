#include "main.h"
/**
 * _printf_char - Function print values type char.
 * @arguments: In arguments list.
 * Return: 1.
*/
int _printf_char(va_list arguments)
{
	char char_to_print = (char)va_arg(arguments, int);

	_putchar (char_to_print);
	return (1);
}
