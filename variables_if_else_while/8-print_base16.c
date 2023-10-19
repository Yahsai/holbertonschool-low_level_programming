#include<stdio.h>
/**
 * main- entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int a;

	for (i = '0'; i <= '9'; i++)
	for (a = 'a'; i <= 'f'; i++)
{
	putchar(i);
	putchar(a);
}
putchar('\n');
return (0);
}
