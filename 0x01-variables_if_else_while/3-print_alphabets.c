/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
char small = 'a';
char big = 'A';
char last = '\n';
while (small <= 'z')
{
putchar (small);
small++;
}

while (big <= 'Z')
{
putchar (big);
big++;
}
putchar (last);
return (0);
}
