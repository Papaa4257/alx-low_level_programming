#include "lists.h"
/**
 * @h: linked list of type listint_t to traverse
 *
 *Description: returns the number of elements in a linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h != Null)
{
num++;
h = h->next;
}
return (num);
}
