#include "main.h"

/**
 * main - test case
*/

int main()
{
    int i = 17;
    int m = 9;
    char cc = 'x';
    char *str = "hello there this is my string";
    int returntype;

    returntype = _printf("Hello, today is %d, of m %d, %%, try char: %c. \n, string = %s, binary = %b", i, m, cc, str, 98);
    return (returntype);
}