#include "main.h"
/**
 * print_rev - print the numbers since 0 - 9.
 * @s: number of str
 * Return: return the numbers 0 up
 */
void print_rev(char *s)
{
int c = 0;
while (s[c] != '\0')
{
c++;
}
for (c -= 1; c >= 0; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
