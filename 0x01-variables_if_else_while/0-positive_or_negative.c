#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - assign a random number to variable n
*print whether number is positive or negative
*Return : 0 if successful
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is a positive number\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
if (n < 0)
{
printf("%d is a negative number\n", n);
}
return (0);
}
