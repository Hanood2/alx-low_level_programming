#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: 'prints all possible different combinations of two digits.'
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num1;
int num2;

num1 = 0;
while (num1 <= 9)
{
num2 = 0;
while (num2 <= 9)
{
if (num1 < num2 && num1 != num2)
{
putchar(num1 + 48);
putchar(num2 + 48);
if (num1 + num2 != 17)
{
putchar(',');
putchar(' ');
}
}
num2++;
}
num1++;
}
putchar('\n');
return (0);
}
