#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */

int main(void)
{
int n;
int nt
nt = %d
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, nt);
}
if (n == 0)
{
printf("Last digit of %d is %d and is 0", n, nt);
}
if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, nt);
}
printf("\n");
return (0);
}
