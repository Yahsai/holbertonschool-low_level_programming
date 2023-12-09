#ifndef MAIN_h
#define MAIN_h

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to read
 * @letters: The number of letters to read and print
 * Return: The number of letters read and printed, or -1 on error
 */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);

#endif
