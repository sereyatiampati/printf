#include "main.h"
/**
 * _printf_numbers - Function valid number dex to int.
 * @arguments: Value arg to list.
 *
 * Return: cnt.
*/
int _printf_numbers(va_list arguments)
{
	int number = va_arg(arguments, int), cnt = 0;
	unsigned int number_max;

	if (number < 0)
	{
		number_max = (-1) * number;
		_putchar('-');
		cnt++;
	}
	else
	{
		number_max = number;
	}

	if (number_max == 0)
	{
		_putchar('0');
		return (1);
	}

	if (number_max > 0 && number_max < 10)
	{
		_putchar('0' + number_max);
		cnt++;
		return (cnt);
	}

	_printf_numbers_recursion(number_max);
	cnt += _counter_number(number_max);

	return (cnt);
}
/**
 * _printf_numbers_recursion - Funtion value number.
 * @number: Value int.
 *
 * Return: cnt.
*/
int _printf_numbers_recursion(unsigned int number)
{
	unsigned int new_number = number / 10;
	unsigned int prt_number = number % 10;
	unsigned int cnt = 0;

	if (new_number != 0)
	{
		cnt += _printf_numbers_recursion(new_number);
		cnt++;
		_putchar('0' + prt_number);
	}
	else
	{
		cnt++;
		_putchar('0' + number);
	}

	return (cnt);
}
/**
 * _counter_number - counter number digits
 * @number: Value int
 *
 * Return: cnt.
 */


int _counter_number(unsigned int number)
{
	int cnt = 0;

	if (number == 0)
	{
		return (1);
	}

	while (number != 0)
	{
		number /= 10;
		cnt++;
	}

	return (cnt);
}
