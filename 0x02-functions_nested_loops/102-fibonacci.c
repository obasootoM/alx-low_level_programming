#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int i = 0;
long j = 1, k = 2;
while (i < 50)
{
if (i == 0)
printf("%lf", j);
else if (i == 1)
printf(", %lf", k);
else
{
k += j;
j = k - j;
printf(", %lf", k);
}
++i;
}
printf("\n");
return (0);
}
