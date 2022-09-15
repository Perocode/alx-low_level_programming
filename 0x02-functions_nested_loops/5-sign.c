#include "main.h"

/**
 * prints sign of a number @n
 * Returns 1 the sign associated with the number
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if(n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar('_');
return (-1);
}
}
