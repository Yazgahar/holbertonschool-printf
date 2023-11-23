#include <stdarg.h>
#include "main.h"

/**
 * print_big_hexa - Prototypes
 * @args: arguments
 * Return: count
 */

int print_big_hexa(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int num2;
	int i;
	int j;
	int copy;
	int count = 0;
	char *hexa;

	if (num == 0)
		return (_putchar('0'));
	for (num2 = num; num2 != 0; count++)
	{
		num2 = num2 / 16;
	}
	hexa = malloc(count);
	for (i = 0; num != 0; i++)
	{
		copy = num % 16;
		if (copy < 10)
			hexa[i] = copy + '0';
		else
			hexa[i] = copy - 10  + 'A';
		num = num / 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(hexa[j]);
	free(hexa);
	return (count);
}
