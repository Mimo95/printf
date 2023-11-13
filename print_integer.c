#include "main.h"

/**
 * print_integer - Function to print an integer.
 * @num: The integer to print.
 *
 * Return: The number of digits in the integer.
 */
int print_integer(int num)
{
    int i = 0;
    int len = 0; /* Variable to store the number of digits */
    char buffer[12]; /* Buffer to store the digits as characters */
    int is_negative = 0; /* Flag to indicate if the number is negative */

    if (num == 0) {
        print_character('0'); /* If the number is zero, print '0' */
        return 1; /* Return 1 as there is only one digit */
    }

    if (num < 0) {
        is_negative = 1; /* If the number is negative, set the flag */
        num = -num; /* Convert the number to positive */
    }

    while (num > 0) {
        buffer[i] = '0' + (num % 10); /* Get the rightmost digit and convert it to character */
        num /= 10; /* Remove the rightmost digit */
        i++;
    }

    if (is_negative) {
        buffer[i] = '-'; /* If the number was negative, add the '-' sign */
        i++;
    }

    len = i; /* Store the number of digits */

    while (i > 0) {
        i--;
        print_character(buffer[i]); /* Print each digit in reverse order */
    }

    return len; /* Return the number of digits */
}
