#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: 'using the main if to print rev. alphabet in small case'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
	putchar(ch);
	ch--;
	}
	putchar('\n');
	return (0);
}
