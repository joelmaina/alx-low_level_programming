#include <stdio.h>

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
char letra;
char retorno = '\n';
int i;
for (i = 0; i < 10 ; i++)
{
letra = 'a';
while (letra <= 'z')
{
putchar (letra);
letra++;
}
putchar (retorno);
}
}
