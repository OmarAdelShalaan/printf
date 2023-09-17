#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...);
int _putchar(char);
void print_binary(unsigned int num);
char *format_integer(int num);
void print_str(char *str);

#endif