#include "lists.h"

/**
 * yahsai - prints text before main function executes
 */

void __attribute__ ((constructor)) yahsai(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
