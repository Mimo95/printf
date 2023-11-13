#include "main.h"

/**
 * print_string - Function to print a string.
 * @str: The string to print.
 *
 * Return: The length of the string.
 */
int print_string(const char *str) {
    int len = 0; /* Variable to store the length of the string */
    const char *ptr = str; /* Pointer to traverse the string */

    while (*ptr != '\0') {
        len++; /* Increment the length for each non-null character */
        ptr++; /* Move to the next character */
    }

    write(1, str, len); /* Use the system function write to write the string to the standard output */
    return len; /* Return the length of the string */
}
