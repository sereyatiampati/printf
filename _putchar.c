#include <unistd.h>
/**
 * _putchar - prototype
 * @c: par
 * Description: mimmicks putchar
 * Return: c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
