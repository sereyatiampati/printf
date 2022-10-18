#include <stdio.h>
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
	if (num == 0)
	{
		converted[0] = '0';
		converted[1] = '\0';
		return;
	}
	int MAX_REP_LEN = 250;
	char NUM_BASE[] = "0123456789ABCDEF";
	char buffer[MAX_REP_LEN];
	int j;
	int i = MAX_REP_LEN - 1;

	while (num != 0)
	{
	buffer[i--] = NUM_BASE[num % base];
	num /= base;
	}
	int counter = 0;

	for (j = i + 1; j <= MAX_REP_LEN - 1; j++)
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

	va_start(arg, c);

	char outbuf[2048];
	int i;
	char *ch;
	double db_val;
	unsigned int uint_val;
	int n = strlen(format) - 1;

	while (*c != '\0')
	{
		if (*c == '%')
		{
			c++;
			switch (*c)
			{
				case 'b':
				case 'B':
				case 'h':
				case 'H':
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
					if (*c == 'b' || *c == 'B')
					{
						decimal_to_baseN(outbuf, num, 2);
					}
					else if (*c == 'o' || *c == 'O')
					{
						decimal_to_baseN(outbuf, num, 8);
					}
					else if (*c == 'd' || *c == 'D')
					{
						decimal_to_baseN(outbuf, num, 10);
					}
					else if (*c == 'h' || *c == 'H')
					{
						decimal_to_baseN(outbuf, num, 16);
					}

					for (i = 0; outbuf[i] != '\0'; i++)
					{
						_putchar(outbuf[i]);
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
					sprintf(outbuf, "%f", db_val);
					for (i = 0; outbuf[i] != '\0'; i++)
					{
						_putchar(outbuf[i]);
					}
					break;

				case 'u':
				case 'U':
					uint_val = va_arg(arg, unsigned int);
					sprintf(outbuf, "%u", uint_val);
					for (i = 0; outbuf[i] != '\0'; i++)
					{
						_putchar(outbuf[i]);
					}
					break;
			}
		}
		else
		{
			_putchar(*c);
		}
		c++;
	}
	va_end(arg);
	return (n);
}
