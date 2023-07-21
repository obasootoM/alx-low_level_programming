#include "main.h"
/**
 * print_line - print the numbers since 0 - 9.
 * @n: check the code
 * Return: return the numbers 0 up to 9.
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar(95);
}
_putchar('\n');
}
}
