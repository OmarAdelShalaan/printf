#include "main.h"

/**
 * _puts - Prints a string to the standard output (stdout).
 * @str: The string to be printed.
 */
void _puts(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
}