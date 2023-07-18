#include "main.h"
/**
 *Description- Program prints alphabet 10x
 * void print_alphabet_x10 function prototype
 * return (0) - eturns a value of 0 
*/
void print_alphabet_x10(void)
{
for (int i = 0; i < 10; i++)
{
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
}
_putchar('\n');
return(0);
}
