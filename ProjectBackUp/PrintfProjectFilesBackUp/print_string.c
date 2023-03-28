#include "main.h"

/**
 * print_string - Prints a string
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_string(va_list list)
{
    int i;          /* Declare a variable to keep track of the number of characters printed */
    char *str;      /* Declare a variable to hold the next string argument from the list */

    /* Get the next string argument from the list */
    str = va_arg(list, char *);

    /* If the string is NULL, print (null) */
    if (str == NULL)
        str = "(null)";

    /* Loop through the string and print each character */
    for (i = 0; str[i] != '\0'; i++)
        _putchar(str[i]);

    /* Return the number of characters printed */
    return (i);
}