#include "function_pointers.h"
/**
* print_name - prints a name
* @name: name to print
* @f: A pointer to a function to print a name
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
