#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef STR_H
#define STR_H

int ft_strlen(const char * str);
char * ft_strcpy(char * dest, char * src);
int ft_strcmp(const char * str1, const char * str2);
char * ft_strdup(char * src);

#endif
