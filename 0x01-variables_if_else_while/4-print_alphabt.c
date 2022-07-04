#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
char l;

for (l = a; l <= z; l++)
{
if (l != q && l != e)
{
putchar(l);
}
}
putchar(10);

return (0);
}
