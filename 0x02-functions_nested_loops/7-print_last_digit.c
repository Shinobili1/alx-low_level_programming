#include "main.h"
/**
* print_last_digit - print_last_digit
*
* @a: number as int
*
* Return: last digit
*/
int print_last_digit(int a)
{
int s;
if (a < 0)
a = -a;
s = a % 10;
_putchar(s + 0);
return (a % 10);
}
