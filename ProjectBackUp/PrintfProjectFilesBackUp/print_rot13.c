#include "main.h"

/**
 * print_rot13 - prints a string using rot13
 * @list: list of arguments from _printf
 * Return: length of the printed string
 */

int print_rot13(va_list list)
{
    int i;
    int x;
    char *str;
    char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char u[] = "BCDEFGHIJKLMNOPQRSTUVWXYZAbcdefghijklmnopqrstuvwxyza";

    /* Extract the string argument from the va_list */
    str = va_arg(list, char *);
    if (str == NULL)
        return (-1);

    /* Iterate through each character in the string */
    for (i = 0; str[i] != '\0'; i++)
    {
        /* Check if the current character is in the rot13 encoding range */
        for (x = 0; x <= 52; x++)
        {
            if (str[i] == s[x])
            {
                /* If so, print the corresponding rot13 character */
                _putchar(u[x]);
                break;
            }
        }
       /* If the character is not in the rot13 encoding range, just print it */
        if (x == 53)
            _putchar(str[i]);
    }

    /* Return the number of characters printed to the console */
    return (i);
}
