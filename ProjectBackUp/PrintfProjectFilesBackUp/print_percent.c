#include "main.h"

/**
 * print_percent - Prints a percent symbol
 * @list: list of arguments (unused)
 *
 * Return: Will return the amount of characters printed.
 */
int print_percent(__attribute__((unused))va_list list)
{
	/*
	 * We don't need to use the argument list, since we're only printing a
	 * single character, which is the percent symbol.
	 */
	_putchar('%');

	/*
	 * Since we only printed a single character, the amount of characters
	 * printed is 1.
	 */
	return (1);
}
