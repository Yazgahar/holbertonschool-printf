#include "main.h"

/**
 * print_unsign - Prototypes
 * @args: arguments
 * Return: totalCharacters
 */

int print_unsign(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[12];
	int i = 0, totalCharacters = 0;
	int digit;

	if (num == 0)
	{
		buffer[i++] = '0';
	}

	else
	{
		while (num != 0)
		{
			digit = num % 10;
			buffer[i++] = digit + '0';
			num /= 10;
		}
	}

	while (i > 0)
	{
		totalCharacters += _putchar(buffer[--i]);
	}

	return (totalCharacters);
}
