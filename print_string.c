#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_string - Prototypes
 * @args: arguments
 * Return: i
 */

int print_string(va_list args)
{
	int i;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	if (str[0] == '\0')
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
