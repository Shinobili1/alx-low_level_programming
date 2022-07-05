include "main.h"

/**
 * print_alphabet - print a-z
 *
 * Return: Always void
 */
void print_alphabet(void)
{
int alpha;

for (alpha = 97; alpha <= 122; alpha++)
{
_putchar(alpha);
}
_putchar(10);
}
