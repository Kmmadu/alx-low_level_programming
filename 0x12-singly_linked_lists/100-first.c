#include <stdio.h>

/* Constructor attribute to specify that 'hare' is a constructor function*/
void __attribute__((constructor)) hare(void);

/**
 * hare - Constructor function that prints a string before main is executed.
 */
void hare(void)
{
/*Print a message to the console before main is executed.*/
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}

