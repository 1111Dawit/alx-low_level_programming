#include <stdio.h>
/**
* swap_int -Swaps the values of two intigers
*
* @a: An intiger to swap
* @b: Another intiger to swap
*
* Return void
*/
void(swap_int(int *a, int *b))
{
int aux;
aux = *a;
*a = *b;
*b = aux;
}
