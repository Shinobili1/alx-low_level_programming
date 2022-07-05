#include "main.h"

/**
 * times_table - 9 times table
 *
 * Return: void
 */
void times_table(void)
{
int j, k, opp;

for (j = 48; j <= 57; j++)
{
_putchar(48);
for (k = 50; k <= 57; k++)
{
opp = j * k;
_putchar(44);
_putchar(32);
if (opp <= 9)
{
_putchar(32);
_putchar(opp + 48);
}
else
{
_putchar((opp / 10) + 48);
_putchar((opp % 10) + 48);
}
}
_putchar(10);
}
}
