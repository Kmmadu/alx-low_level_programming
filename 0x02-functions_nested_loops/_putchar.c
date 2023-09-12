#include <unistd.h>
#include <errno.h>

int _putchar(char c)
{
return (write(1, &c, 1));
}
