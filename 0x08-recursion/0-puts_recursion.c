#include <stdio.h>
/**
* _puts_recursion
* @s: input
* Return: Always 0 (Success)
*/
void _puts_recursions(char *s)
{
if (*s == '\0')
putchar('\n');
else
{
putchar(*s);
_puts_recursions(s + 1);
}
}
