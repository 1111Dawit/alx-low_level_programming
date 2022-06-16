#include <stdio.h>
/**
* _strncat -concatenate two strings
* @dest: The strings to be appended upon.
* @n: The number of bytes from src to be appended to dest.
*/
char *_strncat(char *dest, char *src, int n)
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}
