#include "main.h"
/**
 * _printf_binary - Function assigment args list.
 * @arguments: Value arguments list.
 *
 * Return: cnt.
*/
int _printf_binary(va_list arguments)
{
	unsigned int number = va_arg(arguments, unsigned int);
	int cnt = 0;

	if (number == 0)
	{
		cnt++;
		putchar('0');
	}
	else
	{
		cnt += _printf_binary_recursion(number);
	}

	return (cnt);
}
/**
 * _printf_binary_recursion - Functions value binary.
 * @number: Argumment value number.
 *
 * Return: cnt.
*/
int _printf_binary_recursion(unsigned int number)
{
	unsigned int div = 1, mod;
	int cnt = 0;

	if (number != 0)
	{
		div = number / 2;
		mod = number % 2;

		cnt += _printf_binary_recursion(div);

		if (mod != 0)
		{
			cnt++;
			_putchar('1');
		}
		else
		{
			cnt++;
			_putchar('0');
		}
	}

	return (cnt);
}
