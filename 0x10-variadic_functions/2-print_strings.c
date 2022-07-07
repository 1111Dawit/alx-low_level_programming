#include "variadic_functions.h"
#include <stdrag.h>
#include <stdio.h>
/**
* print_strings - prints stirngs
* @separator: separator between strings
* @n: number of strings to print
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
char *sep, *ptr;
unsigned int i;
va_list list;
if (separator == NULL || *separator == 0)
sep = "";
else
sep = (char *) separator;
va_start(list, n);
if (n > 0)
printf("%s", va_arg(list, char *));
for (i = 1; i < n; i++)
{
ptr = va_arg(list, char*);
if (ptr == NULL)
ptr = "(nil)";
printf("%s%s", sep, ptr);
}
printf("\n");
va_end(list);
}
