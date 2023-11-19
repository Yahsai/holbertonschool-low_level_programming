#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 * Return: 0 if executed successfully, 1 for incorrect number of arguments,
 *         2 for negative number of bytes
 */
int main(int argc, char *argv[]) {
    int num_bytes, i;

    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    num_bytes = atoi(argv[1]);

    if (num_bytes < 0) {
        printf("Error\n");
        return 2;
    }

    /* Print opcodes */
    for (i = 0; i < num_bytes && i < (int)main; i++) {
        printf("%02x ", *((unsigned char*)main + i));
    }

    printf("\n");

    return 0;
}

