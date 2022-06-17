#include <stdio.h>
/**
* print_number - Prints an intiger.
* @n: The intiger to be printed.
*/
void print_number(int n)
{
unsigned int x;
if (n < 0)
{
_putchar('-');
num *= -1;
}
x = n;
 if (x / 10)
print_number(x / 10);
_putchar((x % 10) + '0');
}
