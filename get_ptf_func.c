#include "main.h"
/**
 * get_ptf_func - Grt the specific function to print.
 * @s: Operator.
 * @pos: Value intargs
 * Return: pointer function.
 */
int (*get_ptf_func(const char *s, int pos))(va_list)
{
	int i;
	printf_DT fnPrint[] = {
		{"c", _printf_char},
		{"s", _printf_string},
		{"d", _printf_numbers},
		{"i", _printf_numbers},
		{"b", _printf_binary},
		{"u", _printf_unsigned_int},
		{"o", _printf_octal},
		{"x", _printf_hexadecimalh},
		{"X", _printf_hexadecimalH},
		{NULL, NULL}
	};

	i = 0;

	while (fnPrint[i].dataType != NULL)
	{
		char character = s[pos + 1];
		char *pChar =  malloc(2);

		if (pChar == NULL)
			return (NULL);

		*(pChar) = character;
		*(pChar + 1) = '\0';

		if (_strcmp(pChar, fnPrint[i].dataType) == 0)
		{
			free(pChar);
			return (fnPrint[i].function_printf);
		}

		free(pChar);
		i++;
	}

	return (NULL);
}
