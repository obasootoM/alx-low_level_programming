#include "main.h"
/**
 * print_most_numbers - print the numbers since 0 - 9.
 * Return: return the numbers 0 up to 9.
 */
void print_most_numbers(void)
{
int c;
for (c = 0; c <= 9; c++)
{
if (c == 2 || c == 4)
{
continue;
}
else
{
_putchar(c + '0');
}
}
_putchar('\n');
}
