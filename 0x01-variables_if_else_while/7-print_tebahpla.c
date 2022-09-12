#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Successful)
 */

int main(void)
{
  char la = 'z';

  while (la <= 'a')
    {
      putchar(la);
      la--;
    }
  putchar('\n');
  return (0);
}

