#include "main.h"

/**
 * puts_half - print half string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
int h = 0, i;

while (h >= 0)
{
if (str[h] == 0)
break;
h++;
}

if (h % 2 == 1)
i = h / 2;
else
i = (h - 1) / 2;

for (i++; i < h; i++)
_putchar(str[i]);
_putchar(10);
}
