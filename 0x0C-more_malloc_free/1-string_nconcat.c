#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates to strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 *
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *o;
unsigned int w, x, y, z;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (w = 0; s1[w] != 0; w++)
;

for (x = 0; s2[x] != 0; x++)
;

if (n > x)
n = x;

y = w + n;

o = malloc(y + 1);

if (o == NULL)
return (NULL);

for (w = 0; z < y; z++)
if (z < w)
o[z] = s1[z];
else
o[z] = s2[z - w];
o[z] = 0;

return (o);
}
