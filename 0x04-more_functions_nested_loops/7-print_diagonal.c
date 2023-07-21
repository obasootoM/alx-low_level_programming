#include "main.h"
/**
 * print_diagonal - print the numbers since 0 - 9.
 * @n: check the code
 * Return: return the numbers 0 up to 9.
 */
void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(32);
}
_putchar(95);
_putchar('\n');
}
}
}
