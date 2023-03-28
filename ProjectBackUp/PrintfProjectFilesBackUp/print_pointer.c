#include "main.h"

/**
 * print_pointer - Prints the memory address of a pointer
 * @val: List of arguments passed to the function
 * Return: Number of characters printed
 */
int print_pointer(va_list val)
{
	/* Declare variables */
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	/* Get the pointer argument */
	p = va_arg(val, void*);

	/* If the pointer is NULL, print (nil) */
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	/* Cast the pointer to a long int */
	a = (unsigned long int)p;

	/* Print the "0x" prefix for hexadecimal numbers */
	_putchar('0');
	_putchar('x');

	/* Print the hexadecimal representation of the memory address */
	b = print_hex_aux(a);

	/* Return the number of characters printed */
	return (b + 2);
}
