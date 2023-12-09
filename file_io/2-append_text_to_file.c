#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int kip, len = = strlen(text_content);

	kip = open(filename, O_APPEND | O_RDWR);

	if (filename == NULL)
	{
		return (-1);
	}
	
	if (kip == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		write(kip, text_content, len);
		close(kip);
	}
	return (1);
}
