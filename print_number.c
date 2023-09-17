#include "main.h"

/**
 * format_integer - Format an integer as a string.
 * @num: The integer to format.
 *
 * Return: A pointer to the formatted string.
 */

char *format_integer(int num)
{
    static char digits[12];
    int is_negative = 0;
    int digit_count = 0;
    int i;

    if (num < 0)
    {
        is_negative = 1;
        num = -num;
    }

    do {
        digits[digit_count++] = (char)(num % 10 + '0');
        num /= 10;
    }
    while (num > 0);

    if (is_negative)
    {
        digits[digit_count++] = '-';
    }

    for (i = 0; i < digit_count / 2; i++)
    {
        char temp = digits[i];
        digits[i] = digits[digit_count - 1 - i];
        digits[digit_count - 1 - i] = temp;
    }

    return (digits);


}