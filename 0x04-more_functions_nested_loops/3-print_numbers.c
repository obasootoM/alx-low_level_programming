#include "main.h"
/**
 * print_numbers - print the numbers since 0 - 9.
 * Return: return the numbers 0 up to 9.
 */
void print_numbers(void)
{
int c;
for (c = 0; c <= 9; c++)
{
_putchar(c + '0');
}
_putchar('\n');
}
