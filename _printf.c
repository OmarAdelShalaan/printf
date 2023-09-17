#include "main.h"

/**
 * _printf - Receives a string and all the necessary parameters to
 * print a formatted string.
 * @format: A string containing all the desired characters.
 * Return: A total count of the characters printed.
 */

int _printf(const char *format, ...)
{
    int printed_chars;
    va_list arg_list;

    conver_t formspec_list[] = 
    {
        {"c", print_char},{"s", print_string},{"%", print_percent},{"d", print_integer},{"i", print_integer},{"b", print_binary},{"u", unsigned_integer},{NULL, NULL}
    };

    if (format == NULL)
        return (-1);

    va_start(arg_list, format);

    printed_chars = filter_function(format, formspec_list, arg_list);

    va_end(arg_list);

    return (printed_chars);
}
