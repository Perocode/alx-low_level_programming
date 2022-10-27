#include <stdio.h>
#include "main.h"

/**
 */

unsigned int binary_to-unit(const char *b)
{
  unsigned int total;
  int len, power;

  if (b == NULL)
    {
      return (NULL);
    }

  total = 0;
  len = 0;

  while (b[len])
    {
      if (b[len] != '0' && b[len] != '1')
	{
	  return (0);
	}
      len++;
    }

  for (len--, power = 1; len >= 0; len--, power *= 2)
    {
      if (b[len] == '1')
	{
	  total += power;
	}
    }
  return (total);
}
