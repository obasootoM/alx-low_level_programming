#include "lists.h"
/**
 * print_list - print all element inn a single linklist
 *
 * @h: head of a singlelink list
 * Return: total number of node in the list
 */
size_t print_list(const list_t *h)
{
int i;
if (h == NULL)
{
return (0);
}
for (i = 0; h->next != NULL; i++)
{
if (h->str == Null)
printf("[%u] %s\n", h->len, "(nil)");
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
}
printf("[%u] %s\n", h->len, "(nil)");
return (i);
}
