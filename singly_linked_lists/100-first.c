#include <stdio.h>
#include "lists.h"

void before_main(void);

/**
 * main - Entry point of the program
 *
 * Return: Always 0.
 */
int main(void) {
    before_main();

    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}

void before_main(void) {
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

