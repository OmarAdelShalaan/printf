#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

#define BUFFER_SIZE 1024

int filter_function(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int base_len(unsigned int num, int base);
int hex_check(int num, char x);
char *rev_string(const char *str);
void write_base(char *str);
int _putchar(char);
void _puts(char *str);
int print_integer(va_list);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_number(va_list);
int unsigned_integer(va_list);
int print_unsigned_number(unsigned int);
int print_binary(va_list);
int print_o(va_list list);
int print_x(va_list list);
int print_X(va_list list);

#endif