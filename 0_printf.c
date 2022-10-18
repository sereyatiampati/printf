#include <stdio.h>
#include"_putchar.c"
#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * decimal_to_baseN - prototype
 * @converted: converted num to its baseN
 * @num: number to be converted
 * @base: converts num to its baseN
 * Description: converts decimal to binary
 */
void decimal_to_baseN(char *converted, unsigned int num, int base)
{
	int MAX_REP_LEN = 250;
	char NUM_BASE[] = "0123456789ABCDEF";
	char buffer[250];
	int j;
	int i = MAX_REP_LEN - 1;
	int counter;

	if (num == 0)
	{
		converted[0] = '0';
		converted[1] = '\0';
		return;
	}
	while (num != 0)
	{
	buffer[i--] = NUM_BASE[num % base];
	num /= base;
	}
	for (j = i + 1, counter = 0; j <= MAX_REP_LEN - 1; j++)
	{
		converted[counter++] = buffer[j];
	}
	converted[counter] = '\0';
}

/**
 * _printf - printf prototype
 * @format: par
 * Description: mimmicks the printf function
 * Return: strlen of format
 */
int _printf(const char *format, ...)
{
	int num;
	va_list arg;
	char buffer[1024];
	int i;
	char *ch;
	double db_val;
	unsigned int uint_val;
	int n = strlen(format) - 1;

	va_start(arg, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'b':
				case 'B':
				case 'x':
				case 'X':
				case 'O':
				case 'o':
				case 'd':
				case 'D':
				case 'i':
				case 'I':
					num = va_arg(arg, int);
					if (num < 0)
					{
						_putchar('-');
						num = num * -1;
					}
					if (*format == 'b' || *format == 'B')
					{
						decimal_to_baseN(buffer, num, 2);
					}
					else if (*format == 'o' || *format == 'O')
					{
						decimal_to_baseN(buffer, num, 8);
					}
					else if (*format == 'd' || *format == 'D')
					{
						decimal_to_baseN(buffer, num, 10);
					}
					else if (*format == 'x' || *format == 'X')
					{
						decimal_to_baseN(buffer, num, 16);
					}

					for (i = 0; buffer[i] != '\0'; i++)
					{
						_putchar(buffer[i]);
					}
					break;

				case 'c':
				case 'C':
					num = va_arg(arg, int);
					_putchar(num);
					break;

				case 's':
				case 'S':
					ch = va_arg(arg, char*);
					while (*ch != '\0')
					{
						_putchar(*ch++);
					}
					break;

				case 'f':
				case 'F':
					db_val = va_arg(arg, double);
					sprintf(buffer, "%f", db_val);
					for (i = 0; buffer[i] != '\0'; i++)
					{
						_putchar(buffer[i]);
					}
					break;

				case 'u':
				case 'U':
					uint_val = va_arg(arg, unsigned int);
					sprintf(buffer, "%u", uint_val);
					for (i = 0; buffer[i] != '\0'; i++)
					{
						_putchar(buffer[i]);
					}
					break;
			}
		}
		else
		{
			_putchar(*format);
		}
		format++;
	}
	va_end(arg);
	return (n);
}
