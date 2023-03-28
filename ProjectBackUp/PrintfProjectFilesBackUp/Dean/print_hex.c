#include "main.h"

/**

print_hex - Prints a representation of a decimal number on base16 lowercase
@list: List of the arguments passed to the function
Return: Number of characters printed
*/
/* This function takes a variable argument list and prints a hexadecimal representation of the value passed as an argument in lowercase letters */
int print_hex(va_list list)
{
/* Declare variables */
unsigned int num;
int len;
int rem_num;
char *hex_rep;
char *rev_hex;

/* Get the value from the variable argument list */
num = va_arg(list, unsigned int);

/* If the value is 0, print "0" and return 1 */
if (num == 0)
	return (_putchar('0'));

/* If the value is less than 1, return -1 to indicate an error */
if (num < 1)
	return (-1);

/* Get the length of the hexadecimal representation of the number */
len = base_len(num, 16);

/* Allocate memory for the hexadecimal representation */
hex_rep = malloc(sizeof(char) * len + 1);

/* If memory allocation fails, return -1 to indicate an error */
if (hex_rep == NULL)
	return (-1);

/* Convert the decimal number to a hexadecimal representation */
for (len = 0; num > 0; len++)
{
	rem_num = num % 16;
	if (rem_num > 9)
	{
		rem_num = hex_check(rem_num, 'x');
		hex_rep[len] = rem_num;
	}
	else
		hex_rep[len] = rem_num + 48;
	num = num / 16;
}

/* Add a null terminator to the end of the hexadecimal representation */
hex_rep[len] = '\0';

/* Reverse the hexadecimal representation */
rev_hex = rev_string(hex_rep);

/* If reversing the string fails, free the memory allocated for the hexadecimal representation and return -1 to indicate an error */
if (rev_hex == NULL)
{
	free(hex_rep);
	return (-1);
}

/* Write the reversed hexadecimal representation to standard output */
write_base(rev_hex);

/* Free the memory allocated for the hexadecimal representation and the reversed hexadecimal representation */
free(hex_rep);
free(rev_hex);

/* Return the length of the hexadecimal representation */
return (len);

}