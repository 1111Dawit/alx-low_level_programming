#include <stdio.h>
/**
* puts2 - Prints every other chracter of a string
* @str: The string to be treated
*
* Return: void
*/
void puts2(char *str)
{
int i = 0;
for (; str[i] != '\0'; i++)
{
if ((i % 2) == 0)
putchar(str[i]);
else
continue;
}
putchar('\n');
}
