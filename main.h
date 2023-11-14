#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>

/**
 * this is a header file for all prototype
 * and bibliothèque use in this project.
 */

int _printf(const char *format, ...);
void print_character(char c);
int print_string(const char *str);
int print_integer(int num);

#endif
