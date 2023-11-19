#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 * Return: 0 if executed successfully, 98 for incorrect number of arguments,
 *         99 for invalid operator, 100 for division by zero error
 */
int main(int argc, char *argv[]) {
    int num1, num2, result;
    int (*op)(int, int);

    if (argc != 4) {
        printf("Error\n");
        return 98;  /* Error code 98 for incorrect number of arguments */
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    op = get_op_func(argv[2]);

    if (op == NULL) {
        printf("Error\n");
        return 99;  /* Error code 99 for invalid operator */
    }

    result = op(num1, num2);

    printf("%d\n", result);

    return 0;  /* Success */
}

