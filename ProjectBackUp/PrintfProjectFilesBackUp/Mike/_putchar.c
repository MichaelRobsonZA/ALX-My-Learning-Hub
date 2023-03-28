#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 *
 * Return: The number of characters written to stdout
 */
int _puts(char *str)
{
    register short i;

    /* Loop through each character in the string and print it using _putchar */
    for (i = 0; str[i]; i++)
        _putchar(str[i]);

    /* Return the number of characters written */
    return (i);
}

