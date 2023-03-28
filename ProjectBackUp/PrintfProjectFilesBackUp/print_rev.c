#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @l: argument from _printf
 * Return: length of the printed string
 */

int print_rev(va_list l)
{
    int i = 0, j;
    char *s = va_arg(l, char *);

    /* If the string is NULL, print "(null)" */
    if (!s)
        s = "(null)";

    /* Calculate the length of the string */
    while (s[i])
        i++;

    /* Print the characters of the string in reverse order */
    for (j = i - 1; j >= 0; j--)
        _putchar(s[j]);

   /* Return the length of the string */
    return (i);
}
