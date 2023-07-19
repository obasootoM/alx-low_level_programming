#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int i = 0;
long j = 1, k = 2, sum = k;
while (j + k < 4000000)
{
k += j;
if (k % 2 == 0)
sum += k;
j = k - i;
++i;
}
printf("%ld\n", sum);
return (0);
}
