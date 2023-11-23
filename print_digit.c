#include "main.h"
#include <unistd.h>

/**
 * print_digit - Prototypes
 * @args: arguments
 * Return: totalCharacters
 */

int print_digit(va_list args)
{
	int powerOfTen = 1;
	int totalCharacters = 0;
	long int digit = va_arg(args, int);
	long int tempValue;

	if (digit < 0)
	{
		totalCharacters += _putchar('-');
		digit *= -1;
	}

	if (digit < 10)
	{
	return (totalCharacters += _putchar(digit + '0'));
	}

	tempValue = digit;

	while (tempValue > 9)
	{
		powerOfTen *= 10;
		tempValue /= 10;
	}

	while (powerOfTen > 0)
	{
		totalCharacters += _putchar(((digit / powerOfTen) % 10) + '0');
		powerOfTen /= 10;
	}
	return (totalCharacters);
}
