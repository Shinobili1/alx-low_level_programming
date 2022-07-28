#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *ar;
int x;

if (min > max)
return (NULL);

ar = malloc(sizeof(*ar) * ((max - min) + 1));

if (ar == NULL)
return (NULL);

for (x = 0; min <= max; x++, min++)
ar[x] = min;

return (ar);
}
