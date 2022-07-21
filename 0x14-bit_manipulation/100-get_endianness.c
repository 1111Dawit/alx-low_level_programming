#include "main.h"
/**
* get_endianness - return the endianess of the machine
* Return: 0 for big endian, 1 for little endian
*/
int get_endianness(void)
{
int x;
char *y;
x = 1;
y = (char *)&x;
return (*y);
}
