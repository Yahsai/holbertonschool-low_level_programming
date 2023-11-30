#include <stdio.h>
#include "lists.h"

void before_main(void);

/**
 * main - main function
 *
 * Return: Always 0.
 */
int main(void)
{
    before_main();

    return (0);
}

void before_main(void) {
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

