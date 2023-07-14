#include <stdio.h>
/**
* main - defines the main function.
* Description: print lowercase alphabets and uppercase
* Return: 0 (success)
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
