#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description:  using a write function to print a quote
 * Returns  1 (Successful)
 */

int main()
{

write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

return (1);
}
