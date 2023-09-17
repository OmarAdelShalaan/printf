#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 when successfull or -1 if not
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}