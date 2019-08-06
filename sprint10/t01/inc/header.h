#ifndef HEADER_H
#define HEADER_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

int mx_strlen(const char *s);
void mx_printerr(const char *s);
int main(int argc, char *argv[]);

#endif
