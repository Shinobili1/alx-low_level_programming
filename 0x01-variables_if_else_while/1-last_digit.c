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
int nth;
nth = n % 10
srand(time(0));
n = rand() - RAND_MAX / 2;

if ((nth) > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, nth);
}
else if ((nth) < 6 && (nth) != 0)
{
printf("Last digit of %d is %d and is less than
6 and not 0\n", n, nth);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, nth);
}
return (0);
}
