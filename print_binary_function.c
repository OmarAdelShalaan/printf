#include "main.h"
#include <stdlib.h>

/**
 * base_len - Calculates the number of digits in a number when expressed in a given base.
 * @num: The number to calculate the length for.
 * @base: The base of the number system (e.g., 2 for binary).
 * Return: The number of digits in the number.
 */
int base_len(unsigned int num, int base)
{
    int len = 0;
    while (num != 0)
    {
        num /= base;
        len++;
    }
    return len;
}

/**
 * print_binary - Converts a number from base 10 to binary and prints it
 * @list: List of arguments passed to this function
 * Return: The number of characters printed
 */

int print_binary(va_list list)
{
    unsigned int num;
    int len = 0, i;
    char *binary_str;

    num = va_arg(list, unsigned int);

    if (num == 0)
        return (_putchar('0'));

    if (num < 1)
        return (-1);

    len = base_len(num, 2);
    binary_str = malloc(sizeof(char) * (len + 1));

    if (binary_str == NULL)
        return (-1);

    for (i = len - 1; i >= 0; i--)
    {
        binary_str[i] = (num & 1) + '0';
        num >>= 1;
    }

    binary_str[len] = '\0';

    _puts(binary_str);

    free(binary_str);

    return (len);
}
