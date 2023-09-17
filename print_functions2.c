#include "main.h"

/**
 * print_number - Prints a signed integer
 * @args: List of arguments
 * Return: The number of characters printed
 */
int print_number(va_list args)
{
    int n = va_arg(args, int);
    int len = 0;

    if (n < 0)
    {
        len += _putchar('-');
        n = -n;
    }

    len += print_unsigned_number((unsigned int)n);

    return (len);
}

/**
 * print_unsigned_number - Prints an unsigned integer
 * @n: Unsigned integer to be printed
 * Return: The number of characters printed
 */
int print_unsigned_number(unsigned int n)
{
    int div = 1;
    int len = 0;

    while (n / div > 9)
        div *= 10;

    while (div != 0)
    {
        len += _putchar('0' + n / div);
        n %= div;
        div /= 10;
    }

    return (len);
}
