#include "main.h"

/**
 * print_binary - Print the binary representation of a number.
 * @num: The unsigned integer to be printed in binary.
 */

void print_binary(unsigned int num) {
    int bit_count = sizeof(unsigned int) * 8;
    int leading_zero = 1, i; 
    for (i = bit_count - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        
        if (bit == 1) {
            leading_zero = 0;
        }
        
        if (!leading_zero) {
            _putchar(bit + '0');
        }
    }
    
    if (leading_zero) {
        _putchar('0');
    }
}