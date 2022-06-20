#include <stdio.h>
/**
* swap_int - a function that swaps the values of two intigers
* @dest: copies memory area
* @src: memory area to copy
* @n: number of bytes to copy
* Return: intigers
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
