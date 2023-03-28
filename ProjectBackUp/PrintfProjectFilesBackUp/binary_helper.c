#include "main.h"

/**
 * base_len - Calculates the length for an octal number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return: An integer representing the length of a number
 */

unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	/* Loop until the number is 0 */
	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}


/**
 * rev_string - reverses a string in place
 *
 * @s: string to reverse
 * Return: A pointer to a character
 */

char *rev_string(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	/* Loop through the string to get its length */
	for (len = 0; s[len] != '\0'; len++)
	{}

	/* Allocate memory for the reversed string */
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	/* Copy the original string into the new string */
	_memcpy(dest, s, len);

	/* Loop through the string and swap characters */
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}


/**
 * write_base - sends characters to be written on standard output
 * @str: String to parse
 */

void write_base(char *str)
{
	int i;

	/* Loop through the string and call the _putchar function for each character */
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}


/**
 * _memcpy - copy memory area
 * @dest: Destination for copying
 * @src: Source to copy from
 * @n: The number of bytes to copy
 * Return: The _memcpy() function returns a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/* Loop through the source array and copy each character to the destination array */
	for (i = 0; i < n; i++)
		dest[i] = src[i];

	/* Terminate the string with null character */
	dest[i] = '\0';
	return (dest);
}


/**
 * hex_check - Checks which hex function is calling it
 * @num: Number to convert into letter
 * @x: Tells which hex function is calling it
 * Return: Ascii value for a letter
 */

int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	/* Convert the number to ascii value and return */
	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
