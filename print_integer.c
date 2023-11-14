#include "main.h"

/**
 * print_integer - Fonction to print an integer.
 * @num: The integer to print.
 *
 * Return: The number of digits in the integer
 */

int print_integer(int num)
{
	int i = 0;
	int len = 0;
	char buffer[12];
	int is_negative = 0;

	if (num == 0)
	{
		print_character('0');
		return (1);
	}

	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}

	while (num > 0)
	{
		buffer[i] = '0' + (num % 10);
		num /= 10;
		i++;
	}

	if (is_negative)
	{
		buffer[i] = '-';
		i++;
	}

	len = i;

	while (i > 0)
	{
		i--;
		print_character(buffer[i]);
	}

	return (len);
}
