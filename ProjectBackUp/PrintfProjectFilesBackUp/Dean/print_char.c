#include "main.h"

/**
 * print_char - Prints character
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */

int print_char(va_list list)
{
	/* Get the character to be printed from the argument list using va_arg */
	_putchar(va_arg(list, int));
	
	/* Return the number of characters printed, which is always 1 for a single character */
	return (1);
}
