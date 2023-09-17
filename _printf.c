#include "main.h"

/**
 * _printf - Prints formatted output to stdout
 * @format: The format string containing directives
 *
 * Return: The number of characters printed (excluding the null byte)
 */

int _printf(const char *format, ...)
{
    int char_count = 0;

    va_list args;
    va_start(args, format);
    while (*format) {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 'c':
                {
                    char c = va_arg(args, int);
                    _putchar(c);
                    char_count++;
                    break;
                }
                case 's':
                {
                    char *str = va_arg(args, char *);
                    print_str(str);
                    break;
                }
                case '%':
                {
                    _putchar('%');
                    char_count++;
                    break;
                }
                case 'd':
                case 'i':
                {
                int num = va_arg(args, int);
                char *formatted = format_integer(num);
                while (*formatted)
                {
                    _putchar(*formatted);
                    formatted++;
                    char_count++;
                break;
                }
                }
                case 'b':
                {
                        unsigned int num = va_arg(args, unsigned int);
                        print_binary(num);
                        break;
                }

                default:
                    break;
                
            }
        }
         else
         {
            _putchar(*format);
            char_count++;
        }
        format++;
    }

    va_end(args);

    return (char_count);
}
