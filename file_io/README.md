# Holberton C-File I/O

File Manipulation in C

## Description:

This project involves creating a program that performs various file manipulation tasks in the C programming language. The code must adhere to specific guidelines and restrictions outlined below.

## Requirements:

    Allowed Editors: vi, vim, emacs
    Compilation: Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
    File Ending: All files should end with a new line
    Mandatory File: README.md file at the root of the project folder
    Coding Style: Follow the Betty style (checked using betty-style.pl and betty-doc.pl)
    Global Variables: Not allowed
    Functions per File: Maximum of 5 functions per file
    C Standard Library Functions: Only allowed: malloc, free, exit
    Allowed Syscalls: read, write, open, close
    Special Function: _putchar is allowed
    Header File: Prototypes of all functions and _putchar should be included in main.h
    Header File Push: Don't forget to push your header file
    Header File Include Guard: All header files should be include guarded
    Tip: Prefer symbolic constants (POSIX) vs numbers when it makes sense

## Projects:

Function 1: read_textfile

Write a function that reads a text file and prints it to the POSIX standard output.

c

ssize_t read_textfile(const char *filename, size_t letters);

    Parameters:
        filename: Name of the file to read
        letters: Number of letters to read and print

    Returns:
        Actual number of letters read and printed
        0 if the file can't be opened or read
        0 if filename is NULL
        0 if write fails or doesn't write the expected amount of bytes

Function 2: create_file

Create a function that creates a file.

c

int create_file(const char *filename, char *text_content);

    Parameters:
        filename: Name of the file to create
        text_content: NULL terminated string to write to the file

    Returns:
        1 on success
        -1 on failure (file can't be created, written, etc.)

Function 3: append_text_to_file

Write a function that appends text at the end of a file.

c

int append_text_to_file(const char *filename, char *text_content);

    Parameters:
        filename: Name of the file
        text_content: NULL terminated string to add at the end of the file

    Returns:
        1 on success
        -1 on failure
