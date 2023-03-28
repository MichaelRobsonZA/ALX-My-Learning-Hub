#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define NULL_STRING "(null)"
#define NUL '\0'

/**
 * _printf - custom implementation of printf function in C
 * @format: format string to be printed
 *
 * Return: the number of characters printed (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * format_reciever - Receives the main string and all the
 * necessary parameters to print a formated string.
 * @format: A string containing all the desired characters.
 * @f_list: A list of all the posible functions.
 * @arg_list: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int format_reciever(const char *format, conver_t f_list[], va_list arg_list);

/**
 * print_percent - prints the % symbol
 * @list: list of arguments
 *
 * Return: number of characters printed
 */
int print_percent(va_list list);

/**
 * print_integer - prints an integer
 * @list: list of arguments
 *
 * Return: number of characters printed
 */
int print_integer(va_list list);

/**
 * print_char - prints a character
 * @list: list of arguments
 *
 * Return: number of characters printed
 */
int print_char(va_list list);

/**
 * print_string - prints a string
 * @list: list of arguments
 *
 * Return: number of characters printed
 */
int print_string(va_list list);

/**
 * print_binary - prints an unsigned int as binary
 * @list: list of arguments
 *
 * Return: number of characters printed
 */
int print_binary(va_list list);

/**
 * print_unsigned_integer - prints an unsigned integer
 * @list: list of arguments
 *
 * Return: number of characters printed
 */
int print_unsigned_integer(va_list list);

/**
 * print_octal - prints an unsigned int as octal
 * @list: list of arguments
 *
 * Return: number of characters printed
 */
int print_octal(va_list list);

/**
 * print_hex - prints an unsigned int as lowercase hex
 * @list: list of arguments
 *
 * Return: number of characters printed
 */
int print_hex(va_list list);

/**
 * print_HEX - prints an unsigned int as uppercase hex
 * @list: list of arguments
 *
 * Return: number of characters printed
 */
int print_HEX_D(va_list list);

/**
 * print_String - prints a string
 * @val: list of arguments
 *
 * Return: number of characters printed
 */
int print_String_EX(va_list val);

/**
 * print_pointer - prints a void pointer address
 * @val: list of arguments
 *
 * Return: number of characters printed
 */
int print_pointer(va_list val);

/**
 * print_rev - prints a string in reverse
 * @l: list of arguments
 *
 * Return: number of characters printed
 */
int print_rev(va_list l);

/**
 * print_rot13 - prints a string using rot13 encryption
 * @list: list of arguments
 *
 * Return: number of characters printed
 */
int print_rot13(va_list list);

/**
 * print_number - prints a number recursively
 * @args: argument list containing the number to be printed
 *
 * Return: the number of digits printed
 */
int print_number(va_list args);

/**
 * base_len - gets the length of a given number base
 * @n: the number to be measured
 * @base: the base of the number
*

Return: the length of the number in the given base
*/
unsigned int base_len(unsigned int n, int base);
/**

rev_string - reverses a string
@s: the string to be reversed
Return: a pointer to the reversed string
*/
char *rev_string(char *s);
/**

write_base - writes the given string to stdout
@str: the string to be written
*/
void write_base(char *str);
/**

_memcpy - copies a given number of bytes from src to dest
@dest: destination of the copied bytes
@src: source of the copied bytes
@n: number of bytes to copy
Return: pointer to the destination string
*/
char *_memcpy(char *dest, char *src, unsigned int n);
/**

print_unsgined_number - prints an unsigned integer
@n: the integer to be printed
Return: the number of characters printed
*/
int print_unsgined_number(unsigned int n);
/**

hex_check - checks if the integer is a letter of the hex alphabet
@num: the integer to check
@x: pointer to an integer that gets set to 1 if num is a hex letter
Return: the integer value of the hex letter, or 0 if num is not a letter
*/
int hex_check(int num, char x);
/**

print_hex_aux - prints a hex number recursively
@num: the number to be printed
Return: the number of digits printed
*/
int print_hex_aux(unsigned long int num);
/**

isNonAlphaNumeric - checks if the given character is non-alpha-numeric
@c: the character to be checked
Return: 1 if non-alpha-numeric, 0 if otherwise
*/
int isNonAlphaNumeric(char c);
/**

_puts - writes a string to stdout
@str: the string to be written
Return: the number of characters written
*/
int _puts(char *str);
/**

convert - converts an unsigned long int to a given base
@num: the number to be converted
@base: the base to convert to
@lowercase: flag for lowercase (1) or uppercase (0) letters in hex conversion
Return: a pointer to the converted string
*/
char *convert(unsigned long int num, int base, int lowercase);

#endif /* MAIN_H */

