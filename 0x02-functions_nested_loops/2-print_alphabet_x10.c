#include "main.h"

/**
 * main - print_alphabet_x10 times 10
 * with a new line
 */

void print_alphabet_x10(void)
{
  char x;
  int i;

  i=0;

  while (i < 10)
    {
      x = 'a';
      while (x <= 'z')
	{
	  _putchar(x);
	  x++;
	}
      _putchar('\n');
      i++;
    }
}
