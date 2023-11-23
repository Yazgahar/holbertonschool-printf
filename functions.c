#include "main.h"

/**
 * function - Prototypes
 * @formatSpecifier: char
 * @args: arguments
 * Return: totalCharacters
 */

int function(char formatSpecifier, va_list args)
{
	int i;
	int totalCharacters = 0;

	specifier_t spec[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_modulo},
	{'d', print_digit},
	{'i', print_digit},
	{'o', print_octal},
	{'x', print_low_hexa},
	{'X', print_big_hexa},
	{'u', print_unsign},
	{'p', print_pointer},
	{0, NULL}
	};

	for (i = 0; spec[i].specifier; i++)
	{
	if (formatSpecifier == spec[i].specifier)
		totalCharacters += spec[i].f(args);
	}

	if (totalCharacters == 0)
	{
		totalCharacters += _putchar('%');
		totalCharacters += _putchar(formatSpecifier);
	}

	return (totalCharacters);
}
