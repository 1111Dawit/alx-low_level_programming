#include <stdio.h>
/**
* main -prints all arguments
* @argc: number of arguments passed
* @argv: argument vector of pointers to strings
*
* Return: always 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
2-args.c
