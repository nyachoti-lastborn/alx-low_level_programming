#include "main.h"
/**
 *_islower- function to check if value is lower
 * c - parameter to be checked
 * return (1)-returns value of 1 if true
 *return (0)- returns a value of 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
