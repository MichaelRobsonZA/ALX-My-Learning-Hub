#include "main.h"

/**
 * print_unsigned_integer - Prints Unsigned integers
 * @list: List of all of the arguments
 *
 * Return: The count of the numbers printed.
 */

int print_unsigned_integer(va_list list)
{
	/* Get the unsigned integer from the list of arguments */
	unsigned int num = va_arg(list, unsigned int);

	/* If the number is zero, print it and return */
	if (num == 0)
		return (print_unsgined_number(num));

	/* If the number is less than 1, return -1 */
	if (num < 1)
		return (-1);

	/* Otherwise, print the number and return the count */
	return (print_unsgined_number(num));
}


/**
 * print_unsgined_number - Prints an unsigned number
 * @n: The unsigned integer to be printed
 *
 * Return: The amount of numbers printed
 */

int print_unsgined_number(unsigned int n)
{
	/* Initialize variables */
	int div = 1;
	int len = 0;
	unsigned int num = n;

	/* Find the divisor for the largest place value of the number */
	for (; num / div > 9; )
		div *= 10;

	/* Loop through each digit of the number, printing it and updating the divisor */
	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}

