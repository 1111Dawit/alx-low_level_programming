#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a listint node at index
 * @head: head of list
 * Return: 1 if succeessful, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
  listint_t *ptr, *prev;
  if (head == NULL || *head == NULL)
    return (-1);
  if (index == 0)
    {
      ptr = (*head)->next;
      free(*head);
      *head = ptr;
      return (1);
    }
  for (ptr = *head; index && ptr->next != NULL; index--, ptr = ptr->next)
    prev = ptr;
  if (index)
    prev->next = prev->next->next;
  free(ptr);
  return(1);
}
