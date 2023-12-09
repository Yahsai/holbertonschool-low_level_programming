#include "main.h"

/**
 * read_textfile - read a text file and print it
 * @filename:pointer to the file to be read
 * @letters: how many letter it will read
 * Return: number of bytes it took on success
 * or 0 on error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int kip, b;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		return (0);
	}
	
	if (filename == NULL)
	{
		return (0);
	}

	kip = open(filename, O_RDONLY);

	if (kip == -1)
	{
		return (0);
	}

	b = read(kip, buf, letters);

	buf[letters + 1] = '\0';

	write(STDOUT_FILENO, buf, b);

	free(buf);
	close(kip);
	return (b);
}
