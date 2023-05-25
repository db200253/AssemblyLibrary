#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef LIBASM_H_
#define LIBASM_H_

int ft_strlen(const char * str);
char * ft_strcpy(char * dest, char * src);
int ft_strcmp(const char * str1, const char * str2);
int ft_write(int fd, const void * buf, int count);
int ft_read(int fd, const void * buf, int count);
char * ft_strdup(char * src);
int ft_atoi(char * src);

#endif