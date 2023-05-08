#ifndef MAIN_H
#define MAIN_H

/* Standard header files */
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/* function prototypes */
ssize_t read_textfile(const char *filename, size_t letters);

#endif
