#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: 'prints all the numbers  with space&,'
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;

num = '0';
while (num <= '9')
{
putchar(num);
if (num != '9')
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
