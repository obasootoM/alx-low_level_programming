#include "main.h"
/**
 * puts2 - print the numbers since 0 - 9.
 * @str: number of str
 * Return: return the numbers 0 up
 */
void puts2(char *str)
{
int index;
int len = 0;
while (str[len] != '\0')
{
len++;
}
for (index = 0; index < len; index += 2)
{
_putchar(str[index]);
}
_putchar('\n');
}
