#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: integer to be processed
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{
int lastDigit = n % 10;
if (lastDigit < 0)
lastDigit = -lastDigit;
_putchar(lastDigit + '0');
return (lastDigit);
}
