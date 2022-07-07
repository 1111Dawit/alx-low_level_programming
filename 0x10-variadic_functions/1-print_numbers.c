#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - prints numbers
* @separator: separator between numbers
* @n: numbers to be print
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
char *separ;
unsigned int i;
va_list list;
if (separator == NULL || *separator == 0)
separ = "";
else
separ = (char *) separator;
va_start(list, n);
if (n > 0)
printf("%d", va_arg(list, int));
for (i = 1; i < n; i++)
printf("%s%d", separ, va_arg(list, int));
printf("\n");
va_end(list);
}
