#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_string - Prototypes
 * @args: arguments
 * Return: totalCharacters
 */

int print_string(va_list args)
{
	int i;
	int totalCharacters = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	if (str[0] == '\0')
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
		totalCharacters += _putchar(str[i]);

	return (totalCharacters);
}
