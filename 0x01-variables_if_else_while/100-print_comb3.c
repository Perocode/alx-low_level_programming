#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int a =0;
  int b = 1;

  while(a < b)
    {
      if(a<9 && b<10)
	{
	  putchar(a%10 + '0');
	  putchar(b%10 + '0');
	  b++;
	}
    }
  return (0);
}
