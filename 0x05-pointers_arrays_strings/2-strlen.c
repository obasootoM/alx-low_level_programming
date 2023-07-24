#include "main.h"
/**
 * _strlen - print the numbers since 0 - 9.
 * @s: pointer to number
 * Return: return the numbers 0 up
 */
int _strlen(char *s)
{
int l = 0;
while (*s++)
l++;
return (l);
}
