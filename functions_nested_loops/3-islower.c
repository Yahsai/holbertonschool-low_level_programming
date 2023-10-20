#include "main.h"
/**
 *main-returns 1 if c is lowecase and returns 0 otherwise
 *Return: 2.
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
}
else
{
	return (0);
}
int main(void)
{

	result = _islower('a');
	if (result)
	{
		write(1, "a is lowercase\n", 15);
	} else
	{
		write(1, "a is not lowercase\n", 19);
	}
	return (0);
}
