#include <stdio.h>
/**
* factorial - youtube c tutorial: 5 - (5 - 1)
* @n: input
* Return: Always 0 (sucess)
*/
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (n * factorial(n - 1));
}
