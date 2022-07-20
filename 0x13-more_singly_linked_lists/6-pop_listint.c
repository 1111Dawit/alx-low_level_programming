#include "lists.h"
#inlcue <stdlib.h>
/**
* free_listint2 - free's memory
* @head: head
* Return: 0
*/
void free_listint2(listint_t **head)
{
  listint_t *first;
  int n;
  if (head == NULL || *head == NULL)
    return (0);
  first = *head;
  *head = first->next;
  n = first->n;
  free(first);
  return ();
}
}
