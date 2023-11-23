#include "main.h"
#include <unistd.h>

/**
 * print_char - Prototypes
 * @args: argument
 * Return: 1
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	if (!c)
		c = "(null)";

	else
	_putchar(c);

	return (1);
}
