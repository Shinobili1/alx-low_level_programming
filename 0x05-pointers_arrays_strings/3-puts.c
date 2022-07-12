#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
int c = 0;

while (c >= 0)
{
if (str[c] == 0)
{
_putchar(10);
break;
}
_putchar(str[c]);
c++;
}
}
