#include "main.h"
/**
 * _abs - checks for lowercase character.
 * @c: the charactert to be checked.
 * Return: Always 0.
 */
int _abs(int c)
{
if (c < 0)
{
int abs_var;

abs_var = c * -1;
return (abs_var);
}
return (c);
}

