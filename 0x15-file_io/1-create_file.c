#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: content of what is contained in the file
 * Return: On success 1 and if failed -1
 */

int create_file(const char *filename, char *text_content)
{
int op, wr, lent;

lent = 0;

if (filename == NULL)
{
return (-1);
}

if (text_content != NULL)
{
while (text_content[lent])
{
lent++;
}
}

op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wr = write(op, text_content, lent);

if (op == -1 || wr == -1)
{
return (-1);
}
close(op);

return (1);
}
