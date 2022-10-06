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
int x1, x2;

if (argc != 3)
{
printf("Error\n");
return (1);
}

x1 = atoi(argv[1]);
x2 = atoi(argv[2]);
printf("%d\n", x1 * x2);
return (0);
}
