#include <stdio.h>
#include <stdlib.h>
/**
* int_index - searches for an intiger
* @array: array to search through
* @size: size of array
* @cmp: function used to compare
* Return: first index if cmp does not return 0 else -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i, r;
if (size > 0 && array && cmp)
{
for (i = 0; 1 < size; i++)
{
r = cmp(array[i]);
if (r)
break;
}
if (i < size)
return (i);
}
return (-1);
}
