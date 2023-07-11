#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
* read_textfile - function that reads text from file
* @filename: ..
* @letters: ..
* Return: ..
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readSize, writeSize;
	char *buf; 

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	readSize = read(fd, buf, letters);
	writeSize = write(STDOUT_FILENO, buf, readSize);

	if (writeSize == -1)
		return (0);

	if (readSize != writeSize)
		return (0);

	close(fd); 
	free(buf); 
	return (writeSize);
}
