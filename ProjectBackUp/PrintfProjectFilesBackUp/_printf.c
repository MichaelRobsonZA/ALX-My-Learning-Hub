#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */

/* Conversion specifier list */
conver_t f_list[] = {
    {"%", print_percent},               /* %: Prints a percent sign */
    {"d", print_integer},               /* d: Prints an integer (base 10) */
    {"i", print_integer},               /* i: Prints an integer (base 10) */
    {"c", print_char},                  /* c: Prints a single character */
    {"s", print_string},                /* s: Prints a string */
    {"b", print_binary},                /* b: Prints a binary number */
    {"u", print_unsigned_integer},      /* u: Prints an unsigned integer (base 10) */
    {"o", print_octal},                 /* o: Prints an octal number */
    {"x", print_hex},                   /* x: Prints a hexadecimal number (lowercase) */
    {"X", print_HEX_D},                   /* X: Prints a hexadecimal number (uppercase) */
    {"S", print_String_EX},                /* S: Prints a string, replacing non-printable characters with escape codes */
    {"p", print_pointer},               /* p: Prints a pointer address */
    {"r", print_rev},                   /* r: Prints a string in reverse */
    {"R", print_rot13},                 /* R: Prints a string using the ROT13 cipher */
    {NULL, NULL},                       /* End of list sentinel */
};

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formatted string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
    int printed_chars;
    va_list arg_list;

    /* Check if the format string is NULL */
    if (format == NULL)
        return (-1);

    /* Initialize the va_list object */
    va_start(arg_list, format);

    /* Call format_reciever with the format string, conversion specifier list, and va_list object */
    printed_chars = format_reciever(format, f_list, arg_list);

    /* Clean up the va_list object */
    va_end(arg_list);

	 /* Return the total count of printed characters */
    return (printed_chars);
}

