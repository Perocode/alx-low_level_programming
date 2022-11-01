#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file to append the text to
 * @text_content: content to append into the file
 * Return: On Success 1 and if it fails -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
int op, wr, lent;

if (filename == NULL)
{
return (-1);
}

op = open(filename, O_WRONLY | O_APPEND);

if (op < 0)
{
return (-1);
}

if (text_content)
{
for (lent = 0; text_content[lent];)
{
lent++;
}
wr = write(op, text_content, lent);

if (wr != lent)
{
return (-1);
}
}
close(op);
return (1);
}
