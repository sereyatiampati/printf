#include "main.h"
/**
 * _printf_unsigned_int - print unsigned int number
 * @arguments: Value arguments list.
 *
 * Return: cnt
 */
int _printf_unsigned_int(va_list arguments)
{
	unsigned int number = va_arg(arguments, unsigned int);
	int cnt = 0;

	if (number < 10)
	{
		_putchar('0' + number);
		cnt++;
		return (cnt);
	}


	cnt += _printf_numbers_recursion(number);

	return (cnt);
}
