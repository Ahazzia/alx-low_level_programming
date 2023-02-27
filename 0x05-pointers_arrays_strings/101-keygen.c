#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates rando  password
 * Return: 0
 */
int main(void)
{
char password[84];
int index = 0, sum = 0, diff;

srand(time(0));
while (sum < (2772 - 122))
{
password[index] = 33 + rand() % 94;
sum += password[index];
index++;
}
diff = 2772 - sum;
password[index] = diff;
password[index + 1] = '\0';
printf("%s", password);
return (0);
}
