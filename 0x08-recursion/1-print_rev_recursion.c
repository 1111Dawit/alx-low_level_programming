#include <stdio.h>
/**
* _print_re_recursion - Entry point
* @s: input
* Return: Always 0 (Success)
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
_print_rev_recursion(s + 1);
else
return;
putchar(*s);
}
