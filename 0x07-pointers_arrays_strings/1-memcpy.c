#include <stdio.h>
/**
* swap_int - a function that swaps the values of two intigers
* @a: input 1
* @b: input 2
* Return: intigers
*/
void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;;
}
