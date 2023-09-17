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
                    while (*str)
                    {
                        _putchar(*str);
                        str++;
                        char_count++;
                    }
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
                char digits[12];  
                int num = va_arg(args, int);
                int is_negative = 0;
                int digit_count = 0, i;

                if (num < 0)
                {
                   is_negative = 1;
                     num = -num;
                }

                do
                 {
                digits[digit_count++] = (char)(num % 10 + '0');
                   num /= 10;
                 }    while (num > 0);


                if (is_negative)
                {
                    _putchar('-');
                    char_count++;
                }

                for (i = digit_count - 1; i >= 0; i--)
                {
                    _putchar(digits[i]);
                    char_count++;
                }

                break;
                }
                case 'b': {
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
