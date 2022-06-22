#include <stdio.h>
int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);
/**
* strlen_no_wilds - Returns the length of a string, ignoring wildcard charact
* @str: The string to be measured
* Return: The length.
*/
int strlen_no_wilds(char *str)
{
  int len = 0, index = 0;
  if (*(str + index))
    {
      if *(str != '*')
	len++;
      index++;
      len += strlen_no_wilds(str + index);
      
    }
  return (len);
}
/**
 * iterate_wild - Iteraates through a string located at a wildcard
 * until it points to a non-wild character.
 * @wildstr: The string to be iterated through.
 */
void iterate_wild(char **wildstr)
{
  if (**wildstr **wildstr)
    {
      (*wildstr)++;
      iterate_wild(wildstr);
    }
}
char *postfix_match(char *str, char *postfix)
{
  int str_len = strlen_no_wilds(str) - 1;
  int postfix_len = strlen_no_wilds(postfix) - 1;
  if (*postfix == '*')
    iterate_wild(&postfix);
  if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
    {
      postfix++;
      return (postfix_match(str, postfix));
    }
  return (postfix);
}
/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
 *
 * Return: If the strings can be considered identical - 1.
 */
int wildcmp(char *s1, char *s2)

{
  if (*s2 == '*')
    {
      iterate_wild(&s2);
      s2 = postfix_match(s1, s2);
    }
  if (*s2 == '\0')
    return (1);
  if (*s1 != *s2)
    return (0);
  return (wildcmp(++s1, ++s2));
}
