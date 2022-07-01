/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
char first = 'a';
char end = '\n';
while (first <= 'z')
{
if (first !=  'q' && first != 'e')
{
putchar (first);
}
first++;
}
putchar (end);
return (0);
}
