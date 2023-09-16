#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int num = 65;
    char *text = "Hello, World!";

    _printf("Character: %c\nString: %s\nPercent sign: %%\n", num, text);
    return (0);
}
