#include "main.h"
/**
 * rev_string - print the numbers since 0 - 9.
 * @s: number of str
 * Return: return the numbers 0 up
 */
void rev_string(char *s)
{
int index = 0;
int len = 0;
char temp;
while (s[index++])
len++;
for (index = len - 1; index >= len / 2; index--)
{
temp = s[index];
s[index] = s[len - index - 1];
s[len - index - 1] = temp;
}
}
