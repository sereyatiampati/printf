#include "main.h"
/**
 * _printf_octal - printf in octal number
 * @arguments: va_lis arguments
 *
 * Return: cnt.
 */
int _printf_octal(va_list arguments)
{
	unsigned int number = va_arg(arguments, unsigned int);
	int cnt = 0;

	if (number < 8)
	{
		cnt++;
		_putchar('0' + number);
	}
	else
	{
		cnt += _printf_octal_recursion(number);
	}

	return (cnt);
}
/**
 * _printf_octal_recursion - recursion printf
 * @number: Value unsigned int
 *
 * Return: cnt.
 */
int _printf_octal_recursion(unsigned int number)
{
	unsigned int div = 1, mod;
	int cnt = 0;

	if (number != 0)
	{
		div = number / 8;
		mod = number % 8;

		cnt += _printf_octal_recursion(div);
		cnt++;

		_putchar('0' + mod);
	}

	return (cnt);
}
