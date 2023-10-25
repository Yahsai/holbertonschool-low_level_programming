#include "main.h"
#include <string.h>

/**
 * rev_string - reverses string
 *@s: receives char
 */

void rev_string(char *s)
{
	char temp;
	int i;
	int len;

	for (len = 0; s[len] != '\0';)
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{

		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
