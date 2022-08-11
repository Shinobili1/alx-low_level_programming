#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the linked list
 * @str: string that stores the list
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *n;
size_t ch;

n = malloc(sizeof(list_t));
if (n == NULL)
return (NULL);

n->str = strdup(str);

for (ch = 0; str[ch]; ch++)
;

n->len = ch;
n->next = *head;
*head = n;

return (*head);
}
