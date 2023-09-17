#include <stdio.h>
#include "main.h"

int main(void)
{
    int printed_chars;

    printed_chars = _printf("Hello, world!\n");
    printf("Return Value: %d\n", printed_chars);

    printed_chars = _printf("Character: %c\n", 'A');
    printf("Return Value: %d\n", printed_chars);

    printed_chars = _printf("String: %s\n", "Printf");
    printf("Return Value: %d\n", printed_chars);

    printed_chars = _printf("Decimal: %d\n", 12345);
    printf("Return Value: %d\n", printed_chars);

    printed_chars = _printf("Binary: %b\n", 255);
    printf("Return Value: %d\n", printed_chars);

    printed_chars = _printf("Hexadecimal: %x\n", 255);
    printf("Return Value: %d\n", printed_chars);

    printed_chars = _printf("Percentage: %%\n");
    printf("Return Value: %d\n", printed_chars);

    printed_chars = _printf("Invalid Format: %z\n");
    printf("Return Value: %d\n", printed_chars);

    return (0);
}
