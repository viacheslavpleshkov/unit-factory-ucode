#ifndef COPYFILE_H
#define COPYFILE_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int mx_strlen(const char *s);
void mx_printerr(const char *s);
int main(int argc, char *argv[]);

#endif
