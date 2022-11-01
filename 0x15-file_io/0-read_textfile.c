#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Points the name of the file
 * @letters: The number of letters to be read and printed out
 * Return: if filename is NULL or write fails 0 is returned
 */

size_t read_textfile(const char *filename, size_t letters)
{
int fd, s, t;
char *buff;
if (filename == NULL)
{
return (0);
}
buff = malloc(sizeof(char) * letters);
if (buff == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd < 0)
{
return (0);
}
s = read(fd, buff, letters);
if (s < 0)
{
free(buff);
return (0);
}
buff[s] = '\0';
close(fd);
t = write(STDOUT_FILENO, buff, s);
if (t < 0)
{
free(buff);
return (0);
}
free(buff);
return (t);
}
