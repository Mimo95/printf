#include "main.h"

/**
 * _printf - Function to format and print text.
 * @format: A string containing format specifiers.
 * @...: The variable arguments to format and print.
 *
 * Return: The total number of characters printrs, or -1 on error.
 */
int _printf(const char *format, ...)
{
	int counter = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			print_character(*format);
			format++;
			counter++;
		}
		else
		{
			format++;
			switch (*format)
			{
				case 'c':
					{
						print_character(va_arg(args, int));
						counter++;
						break;
					}
				case 's':
					{
						int len = print_string(va_arg(args, char *));

						counter += len;
						break;
					}
				case '%':
					{
						print_character('%');
						counter++;
						break;
					}
				case 'd':
				case 'i':
					{
						int len1 = print_integer(va_arg(args, int));

						counter += len1;
						break;
					}
				default:
					break;
			}
			format++;
		}
	}
	va_end(args);
	return (counter);
}
