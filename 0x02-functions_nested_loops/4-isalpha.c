#include "main.h"
/**
* _isalpha - a function that checks for alphabetic character
* @c: single letter input
* Rerturn: 1 if c is a letter else 0
*/
int _isalpha(int c)
{
if (((c >= 'a') && (c < 'z')) || ((c >= 'A') && (c <= 'z')))
return (1);
else
return (0);
}
