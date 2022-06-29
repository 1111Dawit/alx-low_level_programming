#include <stdio.h>
/**
* main - prints the number of arguments
* @argc: number of arguments passed to the function
* @argv: argument of pointers to strings
*
* Return: Always 0
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
