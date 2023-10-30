#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * copy_file - Copies the contents of one file to another.
 * @file_from: Source file name.
 * @file_to: Destination file name.
 * Return: 0 on success, exit with error codes if an error occurs.
 */
int copy_file(const char *file_from, const char *file_to)
{
int source_fd, dest_fd;
ssize_t num_bytes;
char buffer[1024];
if (file_from == NULL || file_to == NULL)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
source_fd = open(file_from, O_RDONLY);
if (source_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}
dest_fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (dest_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
exit(99);
}
while ((num_bytes = read(source_fd, buffer, 1024)) > 0)
{
if (write(dest_fd, buffer, num_bytes) != num_bytes)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
exit(99);
}
}
if (num_bytes == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}
if (close(source_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
exit(100);
}
if (close(dest_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
exit(100);
}
return (0);
}
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
copy_file(argv[1], argv[2]);
return (0);
}

