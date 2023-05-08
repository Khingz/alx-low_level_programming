#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX standard output
 * @filename: name= if file to read
 * @letters: size of char to read
 * Return: -1 or size read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_ptr, file_content;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	file_ptr = open(filename, O_RDONLY);
	if (file_ptr == -1)
	{
		return (0);
	}
	file_content = read(file_ptr, buffer, letters);
	write(STDOUT_FILENO, buffer, file_content);
	close(file_ptr);
	free(buffer);
	return (file_content);
}
