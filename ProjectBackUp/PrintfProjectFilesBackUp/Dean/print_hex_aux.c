#include "main.h"

/**
 * print_hex_aux - prints an hexadecimal number.
 * @num: argument to be printed
 * Return: counter for length of printed string
 */
int print_hex_aux(unsigned long int num)
{
    long int i;
    long int *array; /* array to store each digit of the hexadecimal number */
    long int counter = 0;
    unsigned long int temp = num;

    /*  Count the number of digits in the hexadecimal number */
    while (num / 16 != 0)
    {
        num /= 16;
        counter++;
    }
    counter++;

    /*  Allocate memory for the array to store the digits */
    array = malloc(counter * sizeof(long int));

    /*  Store each digit of the hexadecimal number in the array */
    for (i = 0; i < counter; i++)
    {
        array[i] = temp % 16;
        temp /= 16;
    }

    /*  Print each digit of the hexadecimal number */
    for (i = counter - 1; i >= 0; i--)
    {
        /* If the digit is greater than 9, print the corresponding letter */
        if (array[i] > 9)
            array[i] = array[i] + 39;
        _putchar(array[i] + '0');
    }

    /*  Free the memory allocated for the array */
    free(array);

    /*  Return the counter for the length of the printed string */
    return (counter);
}

