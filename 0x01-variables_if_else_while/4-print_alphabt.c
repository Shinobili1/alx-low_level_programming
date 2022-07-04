#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
char l;

for (l = 97; l <= 122; l++)
{
if (l != 113 && l != 101)
{
putchar(l);
}
}
putchar(10);

return (0);
}
