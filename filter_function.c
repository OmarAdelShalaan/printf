#include "main.h"

/**
 * filter_function - Receives a string and all the necessary parameters to
 * print a formatted string.
 * @format: a string.
 * @f_list: A list of all the possible functions.
 * @arg_list: A list containing all the arguments passed to the program.
 * Return: A total count of the characters printed.
 */

int filter_function(const char *format, conver_t f_list[], va_list arg_list)
{
    int printed_chars = 0, i;

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            int j;
            int r_val = -1;

            for (j = 0; f_list[j].sym != NULL; j++)
            {
                if (format[i + 1] == f_list[j].sym[0])
                {
                    r_val = f_list[j].f(arg_list);
                    break;
                }
            }

            if (f_list[j].sym == NULL && format[i + 1] != ' ')
            {
                if (format[i + 1] != '\0')
                {
                    _putchar(format[i]);
                    _putchar(format[i + 1]);
                    printed_chars += 2;
                }
                else
                {
                    return (-1);
                }
            }
            else if (r_val != -1)
            {
                printed_chars += r_val;
                i++;
            }
            else
            {
                return (-1);
            }
        }
        else
        {
            _putchar(format[i]);
            printed_chars++;
        }
    }

    return (printed_chars);
}
