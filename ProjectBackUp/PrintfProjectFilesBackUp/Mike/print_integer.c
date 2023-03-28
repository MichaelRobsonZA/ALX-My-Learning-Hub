#include "main.h"

/**
 * print_integer - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_integer(va_list list)
{
	/* Calls print_number function and returns its output */
	int num_length;
	num_length = print_number(list);
	return (num_length);
}


/**
 * print_number - prints a number send to this function
 * @args: List of arguments
 * Return: The number of arguments printed
 */
int print_number(va_list args)
{
	int n; /* integer argument to print */
	int div; /* divisor to get each digit */
	int len; /* length of the integer when converted to string */
	unsigned int num; /* to handle negative numbers */

	/* Get integer argument from the argument list */
	n  = va_arg(args, int);

	div = 1;
	len = 0;

	/* Handle negative numbers */
	if (n < 0)
	{
		/* Print negative sign and multiply number by -1 to make it positive */
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	/* Calculate divisor */
	for (; num / div > 9; )
		div *= 10;

	/* Print each digit of the number */
	for (; div != 0; )
	{
		len += _putchar('0' + num / div); /* print digit */
		num %= div; /* get next digit */
		div /= 10; /* update divisor */
	}
	
	    /* Return the number of characters printed */
	return (len);
}
