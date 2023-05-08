#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file
 * @text_content: content to write to file
 * Return: 1 (success), -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int file_ptr, size;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	file_ptr = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_ptr == -1)
	{
		return (-1);
	}
	size = strlen(text_content);
	write(file_ptr, text_content, size);
	close(file_ptr);
	return (1);
}
