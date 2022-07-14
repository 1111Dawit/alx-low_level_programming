#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* add_node_end - a function that adds a new node at the end
* @head: input
* @str: input
* Return: 0
*/
list_t *add_node_end(list_t **head, const char *str)
{
int i, n = 0;
list_t *new;
list_t *temp;
new = malloc(sizeof(list_t));
if (new == NULL)
for (i = 0; str[i] != '\0'; i++)
n++;
new->len = i;
new->str = strdup(str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
temp = *head;
while (temp-> != NULL)
temp->next = new;
return (new);
}
