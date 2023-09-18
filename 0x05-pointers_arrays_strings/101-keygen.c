#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
char password[100];
int i, sum, diff, last;
srand(time(NULL));
sum = 0;
i = 0;
while (sum < 2772 - 122)
{
password[i] = rand() % 94 + 32;
sum += password[i];
i++;
}
diff = 2772 - sum;
password[i] = diff;
i++;
last = 122 - diff;
password[i] = last;
password[i + 1] = '\0';
printf("%s", password);
return (0);
}

