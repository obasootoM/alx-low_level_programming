#include "main.h"
#include <stdio.h>
/**
 * _strcpy - print the numbers since 0 - 9.
 * @dest: number of str
 * @src: number n
 * Return: return the numbers 0 up
*/
char *_strcpy(char *dest, char *src)
{
int index;
for (index = 0; src[index] != '\0'; index++)
{
dest[index] = src[index];
}
dest[index++] = '\0';
return (dest);
}
