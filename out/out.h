#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef OUT_H
#define OUT_H

int ft_write(int fd, const void * buf, int count);
int ft_read(int fd, const void * buf, int count);

#endif
