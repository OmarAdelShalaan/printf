#include "main.h"

int _printf(const char *format, ...) {
    int char_count = 0;

    va_list args;
    va_start(args, format);



    while (*format) {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'c': {
                    char c = va_arg(args, int);
                    putchar(c);
                    char_count++;
                    break;
                }
                case 's': {
                    char *str = va_arg(args, char *);
                    while (*str) {
                        putchar(*str);
                        str++;
                        char_count++;
                    }
                    break;
                }
                case '%': {
                    putchar('%');
                    char_count++;
                    break;
                }
                default:
                    break;
            }
        } else {
            putchar(*format);
            char_count++;
        }
        format++;
    }

    va_end(args);

    return char_count;
}
