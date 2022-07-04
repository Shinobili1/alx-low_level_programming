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
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is", n);
if (n > 5)
{
printf("and is greater than 5");
}
if (n == 0)
{
printf("and is 0");
}
if (n < 6 && n != 0)
{
printf("and is less than 6 and not 0");
}
printf("\n");
return (0);
}
