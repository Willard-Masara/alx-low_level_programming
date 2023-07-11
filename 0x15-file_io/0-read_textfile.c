#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
/**
*read_textfile- read txt file and print to POSIX stdoutpt
*@filename: *fp
*@letters: n(letters)
*Return: actual number of letters read and printed or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{

	char *fp;
	ssize_t file;
	ssize_t w;
	ssize_t t;

	file = open(filename, O_RDONLY);
	if (file == 1)
	return (0);

	fp = malloc(sizeof(char) * letters);
	t = read(file, fp, letters);
	w = write(STDOUT_FILENO, fp, t);

	free(fp);
	close(file);
	return (w);





}
