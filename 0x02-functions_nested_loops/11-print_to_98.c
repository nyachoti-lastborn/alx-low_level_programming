#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print a sequence from a given number to 98
 * @n: strating number
 *
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (int i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
else
{
for (int i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
printf(", ");
}
}
printf("\n");
return(0);
}
