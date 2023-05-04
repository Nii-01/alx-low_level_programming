#include "main.h"


/**
 * clear_bit - this sets the value of a given bit to 0 in an unsigned int
 * @n: pointer to the number to change
 * @index: index of the bit to clear (LSB is index 0)
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
        if (index > 63)
                return (-1);


        *n = (~(1UL << index) & *n);
        return (1);
}
