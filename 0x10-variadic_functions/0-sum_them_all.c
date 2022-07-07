#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - sums of all its parameters.
* @n: number of parameters
* @...: A variable number of all parameters
* Return: sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int index, sum = 0;
va_start(nums, n);
for (index = 0; index < n; index++)
sum += va_arg(nums, int);
va_end(nums);
return (sum);
}
