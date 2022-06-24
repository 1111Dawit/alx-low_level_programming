#include <stdio.h>
#include <stdlib.h>
/**
* main - multiply two numbers
* @argc: number of arguments passed
* @argv: argument of pointers to strings
*
* Return: 0 if there is no errors, else 1
*/
int main(int argc, char *argv[])
{
  int a, b, c;
if (argc != 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
c = a * b;
printf("%d\n", c);
 return (0);
}
