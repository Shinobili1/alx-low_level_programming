#include "main.h"

/**
 * puts2 - print string from first char
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
int z = 0;

while (z >= 0)
{
if (str[z] == 0)
{
_putchar(10);
break;
}
if (z % 2 == 0)
_putchar(str[z]);
z++;
}
}
