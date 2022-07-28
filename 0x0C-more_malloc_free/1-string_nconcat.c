#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *con;
unsigned int l = n, ind;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (ind = 0; s1[ind]; ind++)
l++;

con = malloc(sizeof(char) * (l + 1));

if (con == NULL)
return (NULL);

l = 0;

for (ind = 0; s1[ind]; ind++)
con[l++] = s1[ind];

for (ind = 0; s2[ind] && ind < n; ind++)
con[l++] = s2[ind];

con[l] = 0;

return (con);
}
