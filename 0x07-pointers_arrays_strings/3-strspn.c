#include "main.h"

/**
 * _strspn - length of a prefix substring
 * @s: segment of bytes
 * @accept: only bytes
 * Return: the number of bytes in the initial segment of s
 *which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int x, y;
int z = 0;

for (x = 0; s[x] != n; x++)
{
if (s[x] != 32)
{
for (y = 0; accept[y] != 0; y++)
{
if (s[x] == accept[y])
z++;
}
}
else
return (z);
}
return (z);
}
