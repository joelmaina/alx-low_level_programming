/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
char l = 'a';
char r = '\n';
while (l <= 'z')
{
putchar (l);
l++;
}
putchar (r);
return (0);
}
