#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: count
 * @argv: vector
 * Return: int
 */

int main(int argc, char *argv[])
{
int i;
i = 0;

while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
