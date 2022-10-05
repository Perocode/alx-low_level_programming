#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - pointer to newly allocated space in memory
 * containing a copy of the string given
 * @str: duplicate string;
 * Return: the character pointer
 */

char *_strdup(char *str)
{
char *dp;
unsigned int i, len;

i = 0;
len = 0;

if (str == NULL)
{
return (NULL);
}
while (str[len])
{
len++;
}

dp = malloc((len + 1) * sizeof(char));

if (dp == NULL)
{
return (NULL);
}
while ((dp[i] = str[i]) != '\0')
{
i++;
}

return (dp);
}
