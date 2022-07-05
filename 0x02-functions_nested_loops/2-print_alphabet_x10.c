#include "main.h"



/**
 * print_alphabet_x10 - prints alphabets 10
 *
 * Description: prints 10 times
 *
 * Return: Always(0).
 */


void print_alphabet_x10(void)
{
int alphbt_count = 0;
while (alphbt_count < 10)
{
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
alphbt_count++;
_putchar('\n');
}
}
