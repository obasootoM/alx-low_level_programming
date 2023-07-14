#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char high, e, q;
e = 'e';
q = 'q';
for (high = 'a'; high <= 'z'; high++)
{
if (high != e && high != q)
putchar(high);
}
putchar(high);
return (0);
}
