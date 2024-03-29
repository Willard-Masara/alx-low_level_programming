#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_file(const char *src_filename, const char *dest_filename);
void error_exit(const char *message, int exit_code);


#endif
