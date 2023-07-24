#include "main.h"
/**
 * puts_half - print the numbers since 0 - 9.
 * @str: number of str
 * Return: return the numbers 0 up
*/
void puts_half(char *str)
{
int index;
int len = 0;
while (str[len] != '\0')
{
len++;
}
if (len % 2 == 1)
{
index = (len - 1) / 2;
index += 1;
}
else
{
index = len / 2;
}
for (; index < len; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}
