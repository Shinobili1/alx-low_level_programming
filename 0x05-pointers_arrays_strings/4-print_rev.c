#include "main.h"

/**
 * print_rev - print string reversely
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
int alpha = 0;

while (alpha >= 0)
{
if (s[alpha] == 0)
break;
alpha++;
}

for (alpha--; alpha >= 0; alpha--)
_putchar(s[alpha]);
_putchar(10);
}
