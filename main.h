#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Function to format and print text.
 * @format: A string containing the format specifiers.
 * @...: The variable arguments to format and print.
 *
 * Return: The total number of characters printed, or -1 on error.
 */
int _printf(const char *format, ...);

/**
 * print_string - Function to print a string.
 * @str: The string to print.
 *
 * Return: The number of characters printed.
 */
int print_string(const char *str);

/**
 * print_character - Function to print a character.
 * @c: The character to print.
 */
void print_character(char c);

/**
 * print_integer - Function to print an integer.
 * @num: The integer to print.
 *
 * Return: The number of digits in the integer.
 */
int print_integer(int num);

#endif
