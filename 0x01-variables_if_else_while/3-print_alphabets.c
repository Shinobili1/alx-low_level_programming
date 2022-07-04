#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
int l;

for (l = 97; l <= 122; l++)
{
putchar(l);
}
for (l = 65; l <= 90; l++)
{
putchar(l);
}
putchar(10);

return (0);
}
