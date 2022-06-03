#include <stdio.h>
/**
*main - Print a serie of numbers with commas
*
*Return: Always (Success)
*/
int main(void)
{
int c;
for (c ='0'; c <= '9'; c++)
{
p0utchar(c);
if (c != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
