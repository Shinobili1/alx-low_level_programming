#include "main.h"

/**
 * print_diagonal - n lines
 *
 * @n: time diagonal
 *
 * Return: void
 */
void print_diagonal(int n)
{
int x, y;

for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
_putchar( );
}
_putchar(92);
if (x < (n - 1))
_putchar(10);
}
_putchar(10);
}
