#include"main.h"
/**
 *print_sign - checks integar sign
 *@n: integer to check
 *
 * Return: 0 or 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar (43);
		return(1);
	}
	else if (n == 0)
	{
		putchar (48);
		return(0);
	}
	else
	{
		putchar (45);
		return(-1);
	}
}

