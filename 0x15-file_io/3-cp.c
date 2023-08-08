#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

void error_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(exit_code);
}

void copy_file(const char *src_filename, const char *dest_filename)
{
	int src_fd, dest_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];


	src_fd = open(src_filename, O_RDONLY);
	if (src_fd == -1)
	error_exit("Can't read from source file", 98);


	dest_fd = open(dest_filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
	close(src_fd);
	error_exit("Can't write to destination file", 99);
	}


	while ((bytes_read = read(src_fd, buffer, sizeof(buffer))) > 0)
	{
	bytes_written = write(dest_fd, buffer, bytes_read);
	if (bytes_written == -1)
	{
	    close(src_fd);
	    close(dest_fd);
	    error_exit("Can't write to destination file", 99);
	}
	}


	if (bytes_read == -1)
	{
	close(src_fd);
	close(dest_fd);
	error_exit("Can't read from source file", 98);
	}

	if (close(src_fd) == -1 || close(dest_fd) == -1)
	error_exit("Can't close file descriptor", 100);


	dprintf(STDOUT_FILENO, "File copied successfully.\n");
}

int main(int argc, char *argv[])
{
    if (argc != 3)
	    error_exit("Usage: cp file_from file_to", 97);

    copy_file(argv[1], argv[2]);

    return (0);
}

