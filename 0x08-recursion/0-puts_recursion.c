#include <stdio.h>
/**
* _puts_recursion
* @s: input
* @s: input
*/
void _puts_recursions(char *s)
{
if (*s == '\0')
putchar('\n');
else
{
putchar(*s);
puts_recursion(s + 1);
}
}
