#include "main.h"

/**
 * print_octal - Prototypes
 * @args: arguments
 * Return: count
 */

int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int copy;
	char *octal;
	int i;
	int j = 0;
	int count = 0;

	if (num == 0)
		return (_putchar('0'));

	for (copy = num; copy != 0; j++)
	{
		copy = copy / 8;
	}

	octal = malloc(j);

	if (!octal)

		return (-1);
	for (i = j - 1; i >= 0; i--)
	{
		octal[i] = num % 8 + '0';
		num = num / 8;
	}

	for (i = 0; i < j && octal[i] == '0'; i++)
		;

	for (; i < j; i++)
	{
		_putchar(octal[i]);
		count++;
	}

	free(octal);
	return (count);
}
