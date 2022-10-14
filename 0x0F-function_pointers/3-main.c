#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 */

int maint(int argc, char *argv[])
{
  int num1, num2;
  char *opr;

  if ( argc != 4)
    {
      printf("Error\n");
      exit(98);
    }

  num1 = atoi(argv[1]);
  opr = argv[2];
  num2 = atoi(argv[3]);

  if (get_op_func(opr) == NULL || opr[1] != '\0')
    {
      printf("Error\n");
      exit(99);
    }
  if ((*opr == '/' && num2 == 0) || (*opr == '%' && num2 == 0))
    {
      printf("Error\n");
      exit(100);
    }
  printf("%d\n", get_op_func(opr)(num1, num2));
  return (0);
}
