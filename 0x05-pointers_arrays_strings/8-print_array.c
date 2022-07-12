#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elment
 * @a: array
 * @n: elements
 * Return: void
 */
void print_array(int *a, int n)
{
int y = 0;

for (; y < n; y++)
{
printf("%d", *(a + y));
if (y != (n - 1))
printf(", ");
}
printf("\n");
}
