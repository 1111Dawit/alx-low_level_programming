#include "function_pointers.h"
/**
* int_index - searches for an intiger
* @array: array to search through
* @size: size of array
* @cmp: function used to compare
* Return: first index if cmp does not return 0 else -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int index;
if (array == NULL || cmp == NULL)
return (-1);
for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}
return (-1);
}
