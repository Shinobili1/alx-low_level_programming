#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
 int num;
 char letter;

for (num = 0; num < 10; num++)
{
putchar((num % 10) + 0);
}
for (letter = 97; letter <= 102; letter++)
{
putchar(letter);
}
putchar(10);

return (0);
}
