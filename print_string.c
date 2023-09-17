#include "main.h"

/**
 * print_str - print a string.
 * @str: pointer to string
 *
 * Return: Void
 */

void print_str(char *str)
{
    int i;
 if (str == NULL) {
        char nullStr[] = "(null)";
        for (i = 0; nullStr[i] != '\0'; i++)
        {
            _putchar(nullStr[i]);
        }
        return;
    }

    while (*str) {
        _putchar(*str);
        str++;
    }

}