#include<stdio.h>
/**
 *main- entry point
 *
 *Return: always 0
 */
int main(void)
{

	int i;


	for (i = '0'; i <= '9'; i++)
	{
		if (i < 9)
		{
		putchar(i + '0');
		}
	putchar(',');
    putchar(' ');
	}
	putchar('\n');
	return (0);
}
