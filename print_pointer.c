#include "main.h"

/**
 * print_pointer - Prints the address of a pointer in hexadecimal format.
 * @list: List of arguments.
 * Return: Number of characters printed.
 */
int print_pointer(va_list list)
{
    void *ptr = va_arg(list, void *);
    unsigned long int address = (unsigned long int)ptr;
    int printed_chars = 0;
    char hex_chars[] = "0123456789abcdef";

    _putchar('0');
    _putchar('x');
    printed_chars += 2;

    if (ptr == NULL)
    {
        _putchar('0');
        printed_chars++;
    }
    else
    {
        char hex_address[16];
        int i;

        for (i = 0; i < 16; i++)
        {
            hex_address[i] = hex_chars[(address >> (4 * (15 - i))) & 0xF];
        }

        for (i = 0; i < 16; i++)
        {
            _putchar(hex_address[i]);
            printed_chars++;
        }
    }

    return (printed_chars);
}
