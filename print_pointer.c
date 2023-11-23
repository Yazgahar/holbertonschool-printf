#include <stdio.h>
#include <stdint.h>
#include "main.h"


/**
 * print_pointer - Prototypes
 * @args: arguments
 * Return: 1
 */

int print_pointer(va_list args)
{
	int i;
	int non_zero_found;
	void *ptr = va_arg(args, void *);
	size_t size_of_pointer = sizeof(void *);
	int shift;
	char hex_digit;

	non_zero_found = 0;

	_printf("0x");

	for (i = (int)(size_of_pointer * 2 - 1); i >= 0; i--)
	{
		shift = i * 4;
		hex_digit = (char)((uintptr_t)ptr >> shift) & 0xF;

		if (!non_zero_found && hex_digit == 0)
			continue;

		non_zero_found = 1;

		if (hex_digit < 10)
			_printf("%c", '0' + hex_digit);

		else
			_printf("%c", 'a' + (hex_digit - 10));
	}

	return (1);
}
