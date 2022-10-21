#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
README.md hash_table_t *hash_table_created;
README.md unsigned long int i;

README.md /* allocate space for the hash table */
README.md hash_table_created = malloc(sizeof(hash_table_t));

README.md if (hash_table_created == NULL)
README.md README.md return (NULL);

README.md hash_table_created->size = size;
README.md hash_table_created->array = malloc(sizeof(hash_node_t *) * size);

README.md if (hash_table_created->array == NULL)
README.md README.md return (NULL);

README.md for (i = 0; i < size; i++)
README.md {
README.md README.md hash_table_created->array[i] = NULL;
README.md }

README.md return (hash_table_created);
}
