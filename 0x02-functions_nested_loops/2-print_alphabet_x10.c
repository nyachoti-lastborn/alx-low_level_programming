#include "main.h"
/**
 *Description- Program prints alphabet 10x
 * print_alphabet_x10 - prints alphabet 10x in lowercase
 * return: void
*/
void print_alphabet_x10(void)
{
char ch;
int i;
for (i = 1; i <= 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
}
