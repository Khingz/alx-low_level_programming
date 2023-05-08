#include "main.h"

/**
 * append_text_to_file - appends text to eof
 * @filename: name of file
 * @text_content: text to append.
 * Return: -1 (error or 1 (success)
 */
int append_text_to_file(const char *filename, char *text_content)
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
	file_ptr = open(filename, O_WRONLY | O_APPEND);
	if (file_ptr == -1)
	{
		return (-1);
	}
	size = strlen(text_content);
	write(file_ptr, text_content, size);
	close(file_ptr);
	return (1);
}
