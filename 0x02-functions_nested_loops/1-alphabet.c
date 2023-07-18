#include "main.h"
/**
 *Description- code prints the alphabet
 * in lowercase
 * void print_lowercase- function prototype for printing
 * the alphabet
 * return (0) -returns 0
*/
void print_alphabet(void)
{
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
