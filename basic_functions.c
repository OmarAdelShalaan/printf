#include "main.h"

/**
 * rev_string - Reverses a string and returns the reversed string.
 * @str: The string to be reversed.
 * Return: The reversed string.
 */
char *rev_string(const char *str)
{
    int i, j;
    int length = 0;
    char *reversed_str = malloc(length + 1);

    if (str == NULL)
        return NULL;

    while (str[length] != '\0')
        length++;


    
    if (reversed_str == NULL)
        return (NULL);

    for (i = 0, j = length - 1; i < length; i++, j--)
    {
        reversed_str[i] = str[j];
    }
    
    reversed_str[length] = '\0';
    
    return reversed_str;
}

/**
 * write_base - sends characters to be written on standard output
 * @str: String to parse
 */

void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}