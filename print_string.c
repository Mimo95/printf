#include "main.h"

/**
 * print_string - Function to print a string.
 * @str: The string to print.
 *
 * Return: The length of the string.
 */

int print_string(const char *str)
{
	int len = 0;
	const char *ptr = str;

	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}

	write(1, str, len);
	return (len);
}
