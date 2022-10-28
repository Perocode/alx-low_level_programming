#include "main.h"

/**
 * get_endianness - Checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
int num;
char *end;

num = 1;
end = (char *)&num;

if (*end == 1)
{
return (1);
}

return (0);
}
