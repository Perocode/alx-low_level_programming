#include "main.h"
#include <stdio.h>

char *_strpbrk(char *s, char *accept)
{
int i;
int j;

i = 0;
j = 0;

while (*s != '\0')
{
while (*accept != '\0')
{
if (*s == accept[j])
{
return (s);
}
j++;
}
i++;
}
return (0);
}
