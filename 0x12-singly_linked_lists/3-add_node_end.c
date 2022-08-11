#include "lists.h"

/**
 * add_node_end - add a new node at the end
 * @head: head of the linked list
 * @str: string
 *
 * Return: address of the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *n;
list_t *t;
size_t ch;

n = malloc(sizeof(list_t));
if (n == NULL)
return (NULL);

n->str = strdup(str);

for (ch = 0; str[ch]; ch++)
;

n->len = ch;
n->next = NULL;
t = *head;

if (t == NULL)
{
*head = n;
}
else
{
while (t->next != NULL)
t = t->next;
t->next = n;
}
return (*head);
}
