#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: 'prints all the numbers  with space & ,'
*
* Return: Always 0 (Success)
*/
int main(void)
{
int digit;

digit = '0';
while (digit <= '9')
{
putchar(digit);
if (digit != '9')
putchar(',');
putchar(' ');
digit++;
}
putchar('\n');
return (0);
}
