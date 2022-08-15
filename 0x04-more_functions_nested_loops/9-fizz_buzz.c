#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the numbers from 1-100
* 3 multiples print fizz instead of number
* 5 multiples print buzz instead of the number
* 3 and 5 multiples print fizzbuzz instead of the number
* Return: Always 0
*/
int main(void)
{
int i;
char f[] = "Fizz";
char b[] = "Buzz";
char fb[] = "FizzBuzz";
for (i = 1; i <= 100; i++)
{
if (i == 100)
printf("%s", b);
elseif ((i % 3 == 0) && (i % 5 == 0))
printf("%s ", fb);
elseif (i % 3 == 0)
printf("%s ", f);
elseif (i % 5 == 0)
printf("%s ", b);
else
printf("%d ", i);
}
printf("\n");
return (0);
}
