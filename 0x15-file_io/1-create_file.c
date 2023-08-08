#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int create_file(const char *filename, const char *text_content)
{
	int fd;
	size_t text_length;
	ssize_t bytes_written;
	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
	perror("Error opening file");
	return (-1);
	}

	text_length = (text_content != NULL) ? strlen(text_content) : 0;
	bytes_written = write(fd, text_content, text_length);
	if (bytes_written == -1)
	{
	perror("Error writing to file");
	close(fd);
	return (-1);
	}

	close(fd);
	return (1);
}

