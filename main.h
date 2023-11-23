#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct specifier - structure
 * @specifier: char
 * @f: int
 * print_char - %p
 * print_string - %s
 * print_modulo - %%
 * print_digit - %d
 * print_octal - %o
 * print_low_hexa - %x
 * print_big_hexa %X
 * print_unsign - %u
 * print_pointer - %p
 */

typedef struct specifier
{
	char specifier;
	int (*f)(va_list);
} specifier_t;

int print_char(va_list);
int print_string(va_list);
int print_modulo(va_list);
int print_digit(va_list);
int print_octal(va_list);
int print_low_hexa(va_list);
int print_big_hexa(va_list);
int print_unsign(va_list);
int print_pointer(va_list);

int _printf(const char *format, ...);
int function(char s, va_list);
int _putchar(char c);

#endif
