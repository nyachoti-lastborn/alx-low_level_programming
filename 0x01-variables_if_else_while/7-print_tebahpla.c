#include <stdio.h>
/**
* main-main function
*
* Description: using the main function
* this program prints the alphabet in reverse
* Return: 0
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
