#include "main.h"

/**
 * _printf - Function to format and print text.
 * @format: A string containing the format specifiers.
 * @...: The variable arguments to format and print.
 *
 * Return: The total number of characters printed, or -1 on error.
 */
int _printf(const char *format, ...)
{
    int counter = 0; /* Counter for the total number of characters printed */
    va_list args; /* Variable arguments list */

    if (format == NULL)
        return -1;

    va_start(args, format); /* Initialize the variable arguments list */

    while (*format != '\0')
    {
        if (*format != '%') /* If it's a normal character */
        {
            print_character(*format); /* Print the character */
            format++;
            counter++;
        }
        else
        {
            format++;
            switch (*format)
            {
            case 'c': /* If it's a character */
                print_character(va_arg(args, int)); /* Print the character passed as an argument */
                counter++;
                break;

            case 's': /* If it's a string */
                int len = print_string(va_arg(args, char *)); /* Print the string and get its length */
                counter += len;
                break;

            case '%': /* If it's a '%' character */
                print_character('%'); /* Print the '%' character */
                counter++;
                break;

            case 'd': /* If it's a decimal integer */
            case 'i': /* If it's a decimal integer */
                int len1 = print_integer(va_arg(args, int)); /* Print the decimal integer and get its length */
                counter += len1;
                break;

            default:
                break;
            }
            format++;
        }
    }

    va_end(args); /* Clean up the variable arguments list */
    return counter; /* Return the total number of characters printed */
}
