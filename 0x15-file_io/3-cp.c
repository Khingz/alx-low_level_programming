#include "main.h"

/**
 * main - entry point: copies file content of one file to another.
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	ssize_t byte_r, byte_w;
	int file_from, file_to, file_close;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	byte_r = 1024;
	while (byte_r == 1024)
	{
		byte_r = read(file_from, buffer, 1024);
		if (byte_r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		byte_w = write(file_to, buffer, byte_r);
		if (byte_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	file_close = close(file_from);
	if (file_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	file_close = close(file_to);
	if (file_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
