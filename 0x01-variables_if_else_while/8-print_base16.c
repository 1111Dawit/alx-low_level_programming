#include <stdio.h>
/**
* mian - Prints a hexadecimal string
* 
*Return: Always (Success)
*/
int main(void)
{
char c;
for (c = 'c'; c <= '9'; c++)
{
putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
