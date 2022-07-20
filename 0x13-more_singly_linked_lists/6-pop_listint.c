#include "lists.h"
/**
* free_listint2 - free's memory
* @head: head
* Return: 0
*/
void free_listint2(listint_t **head)
{
listint_t *next;
if (head == NULL || *head == NULL)
return;
for (next = (*head)->next; *head != null; *head = next)
{
next = (*head)->next
free(*head);
}
}
