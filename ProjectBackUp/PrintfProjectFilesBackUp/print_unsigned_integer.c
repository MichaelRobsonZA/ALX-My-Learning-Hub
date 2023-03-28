#include "main.h"

/**
 * print_String - print exclusuives string.
 * @val: argumen t.
 * Return: the length of the string.
 */
int print_String(va_list l)
{
	register short len = 0;
	char *res, *s = va_arg(l, char *);
	int count;

	if (!s)
		return (_puts(NULL_STRING));

	/* Loop through each character in the string */
	for (; *s; s++)
	{
		/* Check if character is non-alphanumeric on ASCII table */
		if (isNonAlphaNumeric(*s))
		{
			count += _puts("\\x"); /* Print \x as escape sequence */
			res = convert(*s, 16, 0); /* Convert char to hexadecimal */
			if (!res[1])
				len += _putchar('0'); /* Print leading 0 if necessary */
			len += _puts(res); /* Print the hexadecimal value */
		}
		else
			len += _putchar(*s); /* Print the character as-is */
	}

	return (len);
}

/**
 * isNonAlphaNumeric - determines if char is a non-
 * alphanumeric char on ASCII table
 * @c: input char
 * Return: true or false
 */
int isNonAlphaNumeric(char c) 
{
	/* Check if character is non-alphanumeric on ASCII table */
	return ((c > 0 && c < 32) || c >= 127);
}

/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	/* Define hexadecimal conversion values */
	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";

	ptr = &buffer[49]; /* Start at end of buffer */
	*ptr = NUL; /* Set last character as null terminator */

	do {
		*--ptr = rep[num % base]; /* Convert remainder to hexadecimal */
		num /= base;
	} while (num);

	return (ptr); /* Return the converted string */
}
