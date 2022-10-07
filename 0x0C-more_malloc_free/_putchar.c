#include <unistd.h>
#include <stdlib.h>

/**
 * _putchar - writes character pointer to stout
 * @c: the pointer character
 * Return: the pointer 
 */

int _putchar(char c)
{
  return (write(1, &c, 1));
}
