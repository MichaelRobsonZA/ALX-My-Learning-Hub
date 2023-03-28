#include "main.h"

/**
 * format_reciever - Receives the main string and all the
 * necessary parameters to print a formatted string.
 * @format: A string containing all the desired characters.
 * @f_list: A list of all the possible functions.
 * @arg_list: A list containing all the arguments passed to the program.
 * Return: A total count of the characters printed.
 */
int format_reciever(const char *format, conver_t f_list[], va_list arg_list)
{
	int i, j, r_val, printed_chars;

	printed_chars = 0; /* Initialize the total count of printed characters  */
	for (i = 0; format[i] != '\0'; i++) /* Loop through the entire format string  */
	{
		if (format[i] == '%') /* Check if the current character is the start of a conversion specifier  */
		{
			for (j = 0; f_list[j].sym != NULL; j++) /* Loop through the list of possible conversion specifiers  */
			{
				if (format[i + 1] == f_list[j].sym[0]) /* Check if the next character matches a conversion specifier  */
				{
					r_val = f_list[j].f(arg_list); /* Call the function associated with the conversion specifier  */
					if (r_val == -1) /* Check if the function call was successful  */
						return (-1); /* If not, return -1  */
					printed_chars += r_val; /* Add the number of characters printed to the total count  */
					break; /* Break out of the loop since a conversion specifier was found  */
				}
			}
			if (f_list[j].sym == NULL && format[i + 1] != ' ') /* Check if no conversion specifier was found and the next character is not a space  */
			{
				if (format[i + 1] != '\0') /* Check if the format string has more characters  */
				{
					_putchar(format[i]); /* Print the current character  */
					_putchar(format[i + 1]); /* Print the next character  */
					printed_chars = printed_chars + 2; /* Add 2 to the total count of printed characters  */
				}
				else
					return (-1); /* If not, return -1  */
			}
			i = i + 1; /* Move the index past the conversion specifier  */
		}
		else
		{
			_putchar(format[i]);/* Print the current character  */
			printed_chars++; /* Add 1 to the total count of printed characters  */
		}
	}
	return (printed_chars); /* Return the total count of printed characters  */
}
