#include "main.h"
/**
 *Description- Program prints alphabet 10x
 * void print_alphabet_x10 function prototype
 * return (0) - eturns a value of 0 
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
