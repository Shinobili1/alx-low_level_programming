#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination
 * @src: source
 * Return: Always pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int n = 0;

while (n >= 0)
{
*(dest + n) = *(src + n);
if (*(src + n) == 0)
break;
n++;
}
return (dest);
}
