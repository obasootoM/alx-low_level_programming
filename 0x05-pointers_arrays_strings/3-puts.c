#include "main.h"
/**
 * _puts - print the numbers since 0 - 9.
 * @str: number of str
 * Return: return the numbers 0 up
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
