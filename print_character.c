#include "main.h"

/**
 * print_character - Function to print a character.
 * @c: The character to print.
 */

void print_character(char c)
{
	write(1, &c, 1);
}
