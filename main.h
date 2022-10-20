#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>


/**
 * struct printfDataType - Struct printfDataType
 *
 * @dataType: especial characters in printf
 * @function_printf: The function associated
 */
typedef struct printfDataType
{
	char *dataType;
	int (*function_printf)(va_list);
} printf_DT;


int _printf(const char *format, ...);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
int (*get_ptf_func(const char *s, int pos))(va_list);

int _printf_char(va_list arguments);
int _printf_string(va_list arguments);
int _printf_numbers(va_list arguments);
int _printf_binary(va_list arguments);
int _printf_unsigned_int(va_list arguments);
int _printf_octal(va_list arguments);
int _printf_hexadecimalh(va_list arguments);
int _printf_hexadecimalH(va_list arguments);

int lengthArray(char *array);
int _printf_numbers_recursion(unsigned int number);
int _printf_binary_recursion(unsigned int number);
int _putchar(char c);
int _counter_number(unsigned int number);
int _printf_octal_recursion(unsigned int number);
int _printf_hexadecimal_character(unsigned int number, char hexa[]);

#endif /*MAIN_H */
