#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints the letters.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 * Return: The number of letter printed or filename is NULL - 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, nrd, nwr;
char *buf;
if (filename == NULL)
return (0);
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buf);
return (0);
}
nrd = read(fd, buf, letters);
if (nrd == -1)
{
free(buf);
close(fd);
return (0);
}
nwr = write(STDOUT_FILENO, buf, nrd);
if (nwr == -1 || nwr != nrd)
{
free(buf);
close(fd);
return (0);
}
free(buf);
close(fd);
return (nwr);
}

