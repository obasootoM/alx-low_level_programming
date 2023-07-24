#include "main.h"
/**
 * swap_int - print the numbers since 0 - 9.
 * @a: pointer to number
 * @b:pointer to
 * Return: return the numbers 0 up
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
