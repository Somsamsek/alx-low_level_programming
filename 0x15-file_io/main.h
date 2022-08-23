#ifndef MAIN_H
#define MAIN_H

/* Open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* Close */
#include <unistd.h>

/* dprint */
#include <stdio.h>

/* Function Prototypes */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif /* MAIN_H */
