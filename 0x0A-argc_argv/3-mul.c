#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies arguments it recieves
 * @argc: count
 * @argv: vector
 * Return: int
 */

int main(int argc, char *argv[])
{
int x1, x2, x3;

if (argc != 3)
{
printf("Error\n");
return (1);
}

x1 = atoi(argv[1]);
x2 = atoi(argv[2]);
x3 = x1 *x2;
printf("%d\n", x3);
return (0);
}
