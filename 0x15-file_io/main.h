#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
  * Header File - contains prototypes
  * for 0x15 directory
  */

ssize_t read_textfile(const char *filename, size_t letters);

#endif