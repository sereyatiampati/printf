#include "main.h"
/**
 * _printf_hexadecimalh - print hexadecimal lower case
 * @arguments: Value arguments list.
 *
 * Return: cnt
 */
int _printf_hexadecimalh(va_list arguments)
{
	char hexa[15];
	unsigned int number = va_arg(arguments, unsigned int);
	int cnt = 0;

	hexa[0] = '1';
	hexa[1] = '2';
	hexa[2] = '3';
	hexa[3] = '4';
	hexa[4] = '5';
	hexa[5] = '6';
	hexa[6] = '7';
	hexa[7] = '8';
	hexa[8] = '9';
	hexa[9] = 'a';
	hexa[10] = 'b';
	hexa[11] = 'c';
	hexa[12] = 'd';
	hexa[13] =  'e';
	hexa[14] = 'f';

	if (number < 10)
	{
		_putchar('0' + number);
		return (1);
	}
	else if (number < 16)
	{
		_putchar('0' + (number / 10));
		_putchar('0' + (number % 10));
		return (2);
	}
	else
	{
		cnt = _printf_hexadecimal_character(number, hexa);
	}

	return (cnt);
}
/**
 * _printf_hexadecimalH - print hexadecimal upper case
 * @arguments: Value arguments list.
 *
 * Return: cnt
 */
int _printf_hexadecimalH(va_list arguments)
{
	char hexa[15];
	unsigned int number = va_arg(arguments, unsigned int);
	int cnt = 0;

	hexa[0] = '1';
	hexa[1] = '2';
	hexa[2] = '3';
	hexa[3] = '4';
	hexa[4] = '5';
	hexa[5] = '6';
	hexa[6] = '7';
	hexa[7] = '8';
	hexa[8] = '9';
	hexa[9] = 'A';
	hexa[10] = 'B';
	hexa[11] = 'C';
	hexa[12] = 'D';
	hexa[13] =  'E';
	hexa[14] = 'F';

	if (number < 10)
	{
		_putchar('0' + number);
		return (1);
	}
	else if (number < 16)
	{
		_putchar('0' + (number / 10));
		_putchar('0' + (number % 10));
		return (2);
	}
	else
	{
		cnt = _printf_hexadecimal_character(number, hexa);
	}

	return (cnt);
}
/**
 * _printf_hexadecimal_character - printf characters
 * @number: number to convert
 * @hexa: caracteres
 *
 * Return: cnt
 */
int _printf_hexadecimal_character(unsigned int number, char hexa[])
{

	unsigned int div, mod;
	int cnt = 0;

	if (number != 0)
	{
		div = number / 16;
		mod = number % 16;
		cnt++;
		cnt += _printf_hexadecimal_character(div, hexa);
		if (mod != 0)
		{
			_putchar(hexa[mod - 1]);
		}
		else
		{
			_putchar('0');
		}
	}

	return (cnt);
}
