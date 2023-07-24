#include "main.h"
#include <stdio.h>
/**
 * print_array - print the numbers since 0 - 9.
 * @a: number of str
 * @n: number n
 * Return: return the numbers 0 up
*/
void print_array(int *a, int n)
{
int index;
for (index = 0; index < n; index++)
{
printf("%d", a[index]);
if (index != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
