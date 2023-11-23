#include "main.h"
#include <unistd.h>

/**
 * _printf - Prototypes
 * @format : char
 * Return: count
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list args;

	va_start(args, format);

	if (formati == NULL)
		return (-1);

	while (format != NULL  && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (!format[i + 1] == '\0')
				return (-1);

			count += function(format[i + 1], args);
			i += 2;
		}
		else
		{
			count += _putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
