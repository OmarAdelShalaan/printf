#include "main.h"

/**
 * print_integer - used for integers
 * @list: list of arguments
 * Return: Integer (count)
 */

int print_integer(va_list list)
{
    int num_length;

    num_length = print_number(list);
    return (num_length);
}

/**
 * print_char - used for characters
 * @list: list of arguments
 * Return: Integer (count)
 */

int print_char(va_list list)
{
    _putchar(va_arg(list, int));
    return (1);
}

/**
 * print_string - used for stringgs
 * @list: list of arguments
 * Return: Integer (count)
 */

int print_string(va_list list)
{
    int i = 0;
    char *str = va_arg(list, char *);

    if (str == NULL)
        str = "(null)";

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }

    return (i);
}

/**
 * print_percent - used for % specifier
 * @list: list of arguments (unused)
 * Return: Integer (count)
 */

int print_percent(__attribute__((unused)) va_list list)
{
    _putchar('%');
    return (1);
}



/**
 * unsigned_integer - Prints Unsigned integers
 * @list: List of all the arguments
 * Return: a count of the numbers
 */

int unsigned_integer(va_list list)
{
    unsigned int num = va_arg(list, unsigned int);

    if (num == 0)
        return (print_unsigned_number(num));

    return (num < 1 ? -1 : print_unsigned_number(num));
}
