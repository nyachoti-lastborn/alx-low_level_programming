#include <stdio.h>
/**
* main - main function of the program
* Description: using the main function
* this program prints alphabet in lowercase
* Return: 0
*/
int main(void)
{
char ch;
char h;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
for (h = 'A' ; h <= 'Z' ; h++)
{
putchar(h);
}
putchar('\n');
return (0);
}
