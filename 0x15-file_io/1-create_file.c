#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file.
 * @filename:filename
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1.
 */
int create_file(const char *filename, char *text_content)
{
int fd, len, w;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
len = (text_content != NULL) ? strlen(text_content) : 0;
if (len > 0)
{
w = write(fd, text_content, len);
if (w == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}

