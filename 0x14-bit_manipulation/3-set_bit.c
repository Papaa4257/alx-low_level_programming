#include "main.h"
/**
 * set_bit - function with two arguments
 * @n: pointer to value
 * @index: position to change bit
 *
 * Description: sets the value of a bit to 1 at a given index
 * Return: 1 if worked and -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int p;
if (index > 64)
return (-1);
for (p = 1; index > 0; index--, p *= 2)
;
*n += p;
return (1);
}
